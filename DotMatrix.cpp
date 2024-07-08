#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string str1;
    string str2;

    cout << "Enter string sequence 1: ";
    getline(cin, str1); // Use getline to allow spaces in input
    cout << "Enter string sequence 2: ";
    getline(cin, str2);

    // Create a 2D vector with dimensions based on input string sizes
    vector<vector<int>> stringMap(str1.size(), vector<int>(str2.size(), 0));

    // Fill the 2D vector based on character matches
    for (int i = 0; i < str1.size(); i++) {
        for (int j = 0; j < str2.size(); j++) {
            if (str1[i] == str2[j]) {
                stringMap[i][j] = 1;
            } else {
                stringMap[i][j] = 0;
            }
        }
    }

    // Print the dot matrix
    for (int i = 0; i < str1.size(); i++) {
        for (int j = 0; j < str2.size(); j++) {
            if (stringMap[i][j] == 1) {
                cout << "\\";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }

    return 0;
}
