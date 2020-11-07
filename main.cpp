// Lauryn Clevenger
// Teacher: Dr.Tyson McMillan
// Date: 11/07/2020
// A program to practice working with mult-dimensional arrays

#include <iostream>
#include <string>

using namespace std;

int main() 
{
  // Fort Wainwright, Alaska will be city 1
  // Miami, Florida will be city 2

  /*
    Fort Wainwright, Alaska temperature:
     Day 1: 29°
     Day 2: 24°
     Day 3: 24°
     Day 4: 25°
     Day 5: 18°
     Day 6: 14°
     Day 7: 4°

     Miami, Florida temperature:
     Day 1: 79°
     Day 2: 82°
     Day 3: 83°
     Day 4: 83°
     Day 5: 83°
     Day 6: 83°
     Day 7: 83°
  */

  // Constants
  const int CITY = 2;
  const int WEEK = 7;

  int temperature[CITY][WEEK];
  cout << "Enter all temperatures for a week of first city and then the second city. \n";

  // user insert the values into the temperature arrays
  for (int a = 0; a < CITY; ++a)
  {
    for(int b = 0; b <WEEK; ++b)
    {
      cout << "City " << a + 1 << ", Day " << b + 1 << " : ";
      cin >> temperature[a][b];
    }
  }

  cout << "\n\nDisplaying Values:\n";

  

}