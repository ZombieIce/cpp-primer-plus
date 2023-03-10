#include <iostream>

const double * f1(const double ar[], int n);
const double * f2(const double [], int);
const double * f3(const double *, int);

int main (int argc, char *argv[])
{
  using namespace std;
  double av[3] = {1112.3, 1542.6, 2227.9};
  
  const double *(*p1)(const double *, int) = f1;
  auto p2 = f2;
  cout << "Using pointers to functions:\n";
  cout << " Address Value\n";
  cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
  cout << p2(av, 3) << ": " << "p2(av, 3)" << endl; 
  return 0;
} 
