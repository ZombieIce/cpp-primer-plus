#include <iostream>
void countDown(int n);

int main (int argc, char *argv[])
{
  countDown(4);
  return 0;
}

void countDown(int n) {
  using namespace std;
  cout << "Counting down ... " << n << endl;
  if (n > 0) {
    countDown(n-1);
  }
  cout << n << ": Kaboom!\n";
}
