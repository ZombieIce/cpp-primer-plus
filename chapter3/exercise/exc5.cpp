#include <iostream>
using namespace std;
int main() {
  long worldPop, usPop;
  cout << "Enter the world's population: ";
  cin >> worldPop;
  cout << "Enter the population of the US: ";
  cin >> usPop;

  float ratio = double(usPop) / double(worldPop) * 100;

  cout << "The population of the US is " << ratio
       << "\% of the world population." << endl;

  return 0;
}