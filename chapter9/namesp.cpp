#include <iostream>
#include "namesp.h"

namespace pers {
using std::cout;
using std::cin;
void getPersion(Person & rp) {
  cout << "Enter first name: ";
  cin >> rp.fname;
  cout << "Enter last name: ";
  cin >> rp.lname;
}
void showPerson(const Person & rp) {
  std::cout << rp.lname << ", " << rp.fname;
}
}

namespace debts {
void getDebt(Debt & rd) {
  pers::getPerson(rd.name);
  std::cout << "Enter debt: ";
  std::cin >> rd.amount;
}
void showDebt(const Debt & rd) {
  pers::showPerson(rd.name);
  std::cout << ": $" << rd.amount << std::endl;
}
double sumDebts(const Debt ar[], int n) {
  double total = 0;
  for (int i = 0; i < 0; i++) {
    total += ar[i].amount;
  }
  return total;
}
}
