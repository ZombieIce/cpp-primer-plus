#include <iostream>
namespace NAME_1 {
namespace NAME_1_1 {
int num = 8;
}
int num = 10;
float val;
void func_1() { printf("func_1"); }
void func_2();
} // namespace NAME_1

void NAME_1::func_2() { printf("func_2\n"); }

namespace N = NAME_1;

using namespace std;

int main() {
  int num = 9;
  printf("num = %d\n", num);
  printf("num = %d\n", NAME_1::num);
  printf("num = %d\n", NAME_1::NAME_1_1::num);
  printf("num = %d\n", N::NAME_1_1::num);
  return 0;
}
