#include <cmath>
#include <iostream>

using namespace std;

int main() {
  double area;
  cout << "Enter the floor area, in square feet of your home: ";
  cin >> area;
  double side;
  side = sqrt(area);
  cout << "That's the equivalant of a square " << side << " feet to the aside."
       << endl;
  cout << " How fascianting!" << endl;
  return 0;
}