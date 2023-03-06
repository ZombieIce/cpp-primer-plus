#include <iostream>
using namespace std;

struct travel_time
{
  int hours;
  int mins;
};

const int Mins_per_hr = 60;

travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);

int main (int argc, char *argv[])
{
  using namespace std;
  travel_time day1 = {5, 45};
  travel_time day2 = {4, 55};

  travel_time trip = sum(day1, day2);
  cout << "Two-day total: ";
  show_time(trip);

  return 0;
}

travel_time sum(travel_time t1, travel_time t2) {
  travel_time total;
  int totalMins = t1.mins + t2.mins;
  total.mins = totalMins % Mins_per_hr;
  total.hours = t1.hours + t2.hours + totalMins / Mins_per_hr;
  return total;
}

void show_time(travel_time t) {
  using namespace std;
  cout << t.hours << " hours. "
    << t.mins << " minutes\n";
}
