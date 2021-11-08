#include <iostream>
using namespace std;

int main()
{
    cout << "*If you draw, you play again! This will happen until someone wins!*\n";
    int user;
    int cpu = rand() % 3 + 1;
                      
bool Win = ((user == 1 && cpu == 3) || (user == 2 && cpu == 1) || (user == 3 && cpu == 2));
bool Draw = (user == cpu);

    do
    {
    srand(time(NULL));
                        
    cout << "(Sorin) - 'You'll never win!'\n";
    cout << "(You) - 'Yeah, we'll see about that.'\n";
                        
    cout << "1) rock\n";
    cout << "2) paper\n";
    cout << "3) scissors\n";
 
    cout << "shoot! \n";

    cin >> user;

    if(!(user >= 1 && user <= 3))
    {
    cout << "There are only 3 options, wtf are you doing?\n";
    }
    if(Win)
    {
    cout << "(Sorin) - 'You Won... but I don't have shit, haha!'\n";
    }
    else if(Draw)
    {
    cout << "(Sorin) - 'That is a draw, let's go again!'\n";
    }
    else
    {
cout << "(Sorin) - 'You lost mate...Your adventure ends here!'\n";
cout << "*YOU DIED!*";
return 0;
}                        

}
while(user == cpu);

return 0;
}