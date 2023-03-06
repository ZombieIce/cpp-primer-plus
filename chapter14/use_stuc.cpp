#include <iostream>
#include "studentc.h"
using std::cin;
using std::cout;
using std::endl;

void set(Student & sa, int n);
const int pupile = 3;
const int quizzes = 5;

int main (int argc, char *argv[])
{
  Student ada[pupile] = {
    Student(quizzes), Student(quizzes), Student(quizzes)
  };
  int i;
  for (i = 0; i < pupile; ++i) {
    set(ada[i], quizzes);
  }
  cout << "\nStudent List:\n";
  for (i = 0; i < pupile; ++i) {
    cout << ada[i].Name() << endl; 
  }
  cout << "\nResults:";
  for (i = 0; i < pupile; ++i) {
    cout << endl << ada[i];
    cout << "average: " << ada[i].Average() << endl;
  }
  cout << "Done.\n";
  return 0;
}

void set(Student & sa, int n) {
  cout << "Please enter the student's name: ";
  getline(cin, sa);
  cout << "Please enter " << n << " quiz scores:\n";
  for (int i = 0; i < n; i++) {
    cin >> sa[i];
  }
  while (cin.get() != '\n') {
    continue;
  }
}
