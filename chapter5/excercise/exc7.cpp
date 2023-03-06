#include <array>
#include <iostream>
#include <string>

using namespace std;
struct car {
    char producer[20];
    int year;
};
int main() {
    int count;
    cout << "How many cars do you wish to catalog? ";
    (cin >> count).get();
    car *p = new car[count];
    for (int i = 0; i < count; i++) {
        cout << "Car #" << i+1 << endl;
        cout << "Please enter the make: ";
        cin.get(p[i].producer, 20).get();
        cout << "Please enter the year made: ";
        (cin >> p[i].year).get();
    }
    cout << "Here is your collection:\n";
    for (int i = 0; i < count; i++) {
        cout << p[i].year << " " << p[i].producer << endl;
    }
    return 0;
}