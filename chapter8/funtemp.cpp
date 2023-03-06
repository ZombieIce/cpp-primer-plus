#include <iostream>

template <typename T>
void Swap(T &a, T &b);

int main (int argc, char *argv[])
{
  using namespace std;
  int i {10};
  int j {20};

  cout << "i, j = " << i << ", " << j << ".\n";
  swap(i, j);
  cout << "Now i, j = " << i << ", " << j << ".\n";

  double x = 24.5;
  double y = 81.7;
  cout << "x, y = " << x << ", " << y << ".\n";
  cout << "Using compiler-generated double swapper:\n";
  Swap(x, y);
  cout << "Now i, j = " << i << ", " << j << ".\n";

  return 0;
}

template <typename T>
void Swap(T &a, T &b) {
  T temp;
  temp = a;
  a = b;
  b = temp;
}
