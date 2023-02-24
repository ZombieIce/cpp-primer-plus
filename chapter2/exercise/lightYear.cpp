#include <iostream>
using namespace std;
double getAstronUnits(double);

int main() {
    double lightYear;
    cout << "Enter the number of light years: ";
    cin >> lightYear;
    cout << lightYear << " light years = " << getAstronUnits(lightYear);
    cout << " astronomical units" << endl;
    return 0;
}

double getAstronUnits(double ly) { return ly * 63240; }
