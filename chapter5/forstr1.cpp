#include <iostream>
using namespace std;

int main() {
    cout << "Enter a word: ";
    string word;
    cin >> word;
    for (int i = word.size(); i >= 0; i--) {
        cout << word[i];
    }

    cout << "\nBye.\n";
    return 0;
}