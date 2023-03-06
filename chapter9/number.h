#ifndef NUMBER_H
#define NUMBER_H
#include <iostream>
namespace Math_Func {
class Number {
public:
  Number() = default;
  ~Number();
  Number(double x);
  void info_number() const {
    std::cout << "Number :" << x << std::endl;
  }
private:
  double x{0.0};
};
}
#endif // !NUMBER_H
