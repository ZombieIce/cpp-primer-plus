#include <iostream>
using namespace std;

namespace Number_func {
  int add(int a, int b) {
  return a + b;
}
}

int add(int a, int b) {
  return a + b + 1;
}

int main (int argc, char *argv[])
{
  int a = 3, b = 4;
  cout << add(a, b) << endl;
  cout << Number_func::add(a, b) << endl;
  return 0;
}
