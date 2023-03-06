#include <iostream>
using namespace std;

const int Cities = 5;
const int Years = 4;

int main() {
    const char* cities[Cities] = {"Gribble City", "GribbleTown", "New Gribble",
                                  "San Gribble", "Gribble Vista"};

    int maxtemps[Years][Cities] = {
        {96, 100, 87, 101, 105},
        {96, 100, 87, 101, 105},
        {96, 100, 87, 101, 105},
        {98, 103, 95, 109, 105},
    };
    cout << "Maximum temperatures for 20008 - 2011\n\n";
    for (int city = 0; city < Cities; ++city) {
        cout << cities[city] << ":\t";
        for (int year = 0; year < Years; ++year) {
            cout << maxtemps[year][city] << "\t";
        }
        cout << endl;
    }

    return 0;
}