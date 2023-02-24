#include <iostream>
using namespace std;
int main() {
  const int dayHours{24*3600};
  const int hourMinutes{3600};
  const int minuteSeconds{60};
  int seconds{};
  cout << "Enter the number of seconds: ";
  cin >> seconds;
  int days = seconds / dayHours;
  int secondsDayRemain = seconds % dayHours;
  int hours = secondsDayRemain / hourMinutes;
  int secondsHourRemain = secondsDayRemain % hourMinutes;
  int minutes = secondsHourRemain / minuteSeconds;
  int remainSeconds = secondsHourRemain % minuteSeconds;
  cout << seconds << " seconds = " << days << " days. " << hours << " hours, "
       << minutes << " minutes, " << remainSeconds << " seconds\n";

  return 0;
}