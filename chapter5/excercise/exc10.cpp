#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter number of rows: ";
    cin >> size;
    for (int i=0; i < size; ++i) {
        for (int j=0; j < size-i-1; ++j) {
            cout << ".";
        }
        for (int l=0; l < i+1; ++l) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}