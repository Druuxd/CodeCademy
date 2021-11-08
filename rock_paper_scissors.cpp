#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

//this is a game of "Rock, Paper, Scissors".

int main()
{
srand(time(NULL));
int cpu = rand() % 3 + 1;

int user = 0;

cout << "====================\n";
cout << "rock paper scissors!\n";
cout << "====================\n";
 
cout << "1) rock\n";
cout << "2) paper\n";
cout << "3) scissors\n";
 
cout << "shoot! \n";

cin >> user;


if(cpu == 1 && user == 2)
{
    cout << "You Win!\n";
}
else if(cpu == 1 && user == 3)
{
    cout << "Computer Wins!\n";
}
else if(cpu == 2 && user == 1)
{
    cout << "Computer Wins!\n";
}
else if(cpu == 2 && user == 3)
{
    cout << "You Win!\n";
}
else if(cpu == 3 && user == 1)
{
    cout << "You Win!\n";
}
else if(cpu == 3 && user == 2)
{
    "Computer Wins!\n";
}
else
{
    cout << "It's a Draw!";
}
    return 0;
}