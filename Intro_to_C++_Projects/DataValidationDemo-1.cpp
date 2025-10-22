// Program Name : DataValidationDemo.cpp  Student Starting File
//                from Program 5-4 Gaddis
// Date: 10/15/24
// Author : Charli Pape
// Class : CSC100AA
// Brief Description:
// This program calculates the number of soccer teams a youth
// league may create from the number of available players.

// Input validation is done with while loops.
// Players per team : 9 - 15
// Players available : >1

#include <iostream>
using namespace std;

int main()
{
   int players,      // Number of available players
       teamPlayers,  // Number of desired players per team
       numTeams,     // Number of teams
       leftOver;     // Number of players left over

   // Get the number of players per team
   cout << "How many players do you wish per team?\n";
   cout << "(Enter a value in the range 9 - 15): ";
   cin  >> teamPlayers;
   
   // Validate the input
   while (teamPlayers < 9 || teamPlayers > 15)
   {
       cout << "(Team size must be 9 -15. Re-nter the value): ";
       cin  >> teamPlayers;
   }

   // Get the number of players available
   cout << "How many players are available? ";
   cin  >> players;
   
   // Validate the input
  while(players < teamPlayers)
  {
      cout << "Can't form a team. Re-enter the no. of players: ";
      cin >> players;
  }

   // Calculate the number of teams.
   numTeams = players / teamPlayers;
   
   // Calculate the number of leftover players.
   leftOver = players % teamPlayers;
   
   // Display the results.
   cout << "\nThere will be " << numTeams << " teams with ";
   cout << leftOver << " players left over.\n";
   return 0;
}
/*  Expected Output


How many players do you wish per team?
(Enter a value in the range 9 - 15): 12
How many players are available? 9
Can't form a team. Re-enter the no. of players: 17

There will be 1 teams with 5 players left over.



*/