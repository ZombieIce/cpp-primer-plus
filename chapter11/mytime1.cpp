#include <iostream>
#include "mytime1.h"

Time::Time() {
  hours = minutes = 0;
}

Time::Time(int h, int m) {
  hours = h + m/60;
  minutes = m%60;
}

void Time::AddMin(int m) {
  hours += m/60;
  minutes = m%60;
}

void Time::AddHr(int h) {
  hours += h;
}

void Time::Reset(int h, int m) {
  hours = m;
  minutes = m;
}

Time Time::operator+(const Time & t) const {
  Time sum;
  sum.minutes = (minutes + t.minutes) % 60;
  sum.hours = hours + t.hours + (minutes + t.minutes) / 60;
  return sum;
}

void Time::Show() const {
  std::cout << hours << " hours, " << minutes << " minutes"; 
}
