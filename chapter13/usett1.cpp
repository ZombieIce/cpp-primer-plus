#include <iostream>
#include "tabtenn1.h"

int main (int argc, char *argv[])
{
  using std::cout;
  using std::endl;
  TableTennisPlayer player1("Tara", "Boomdea", false);
  RatedPlayer rplayer1(1140, "Mallory", "Duck", true);
  rplayer1.Name();
  if (rplayer1.HasTable()) {
    cout << ": has a table.\n";
  } else {
    cout << ": hasn't a table.\n";
  }
  player1.Name();
  if (player1.HasTable()) {
    cout << ": has a table.\n";
  } else {
    cout << ": hasn't a table.\n";
  }

  RatedPlayer rplayer2(1212, player1);
  cout << "Name: ";
  rplayer2.Name();
  cout << "; Rating: " << rplayer2.Rating() << endl;

  return 0;
}
