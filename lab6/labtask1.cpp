#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter a word or sentence: ";
    getline(cin, str);

    string cleanStr = "";
    for (char c : str) {
        if (isalnum(c)) {
            cleanStr += tolower(c);
        }
    }

   
    string reversedStr = cleanStr;
    reverse(reversedStr.begin(), reversedStr.end());

    if (cleanStr == reversedStr)
        cout << "✅ It's a palindrome!" << endl;
    else
        cout << "❌ It's not a palindrome." << endl;

    return 0;
}
