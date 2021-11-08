#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

void outputChoice(int c) //options for the game
{
    switch(c)
    {
        case 1:
            cout << "Rock";
            break;
        case 2:
            cout << "Paper";
            break;
        case 3:
            cout << "Scissors";
            break;
    }
}

bool Win(int user, int sorin) //how to make player win
{
    bool result =
        (   (user == 1 && sorin == 3) ||
            (user == 2 && sorin == 1) ||
            (user == 3 && sorin == 2) );
    return result;
}
bool Draw(int user, int sorin)// draw, user for looping the game
{
    bool result =
        ((user == sorin));
    return result;
}

int main()
{

    int sorin,user; //needed later

    cout << "           #######################" << endl;
    cout << "           #    WELCOME TO MY    #" << endl;
    cout << "           #      ADVENTURE      #" << endl;
    cout << "           #######################" << endl;

     // --> makes txt appear slower.
    cout << ">>Hello there! \n" << "  Your country has been nuked, LOL!\n\n";

    
    cout << ">>If you want to survive, you'll need to find: \n" << "    -Water\n" << "    -Canned Food\n" << "    -Shelter\n\n";

    
    cout << ">>Come on, let's go!\n\n";

    
    cout << ">>YOOOO! Chech that gyal out, DAMNN!!\n" << "Let's go and talk to her!\n\n";
    
    cout << "(You) - 'Hello there! My name is Abdul, are you ok?'" << "\n";
    
    cout << "(Gyal) - 'Hello, Abdul! My name is Keisha, yes I am fine, may I join you in your adventure?'" << "\n\n";
    
    cout << "                   1.Yes!        2.Nah, I'm good!" << "\n";
int answer;
        cin >> answer;
            if(answer == 2)
            {
                
                cout << "(Keisha) - I CURSE YOU AND YOUR ENTIRE FAMILY, YOU SHALL NEVER FIND TRUE LOVE AND HAPPINESS!\n";
                
                cout << "(You) - Latta bitch!\n\n";
                
                cout << ">>I'm so glad you said 'no', she ain't even that fine, I had a bad feeling about her from the beginning anyway.\n\n";
                
                cout << "(You) - 'Yeah, she for the streets, porbably would've betrayed me and stabbed me in the neck or some shit anyway.'\n";
                
                cout << ".\n";
                
                cout << "..\n";
                
                cout << "...\n\n";
                
                cout << "*You've been walking for quite a while now, when you spot a tall man dressed in a full camo suit. He looks at you in shock and yells 'SURVIVOR!'*\n";
                
                cout << "*Congratulations, you were saved by the military! You lucky bastard!*\n"; // first ending
            }
            else if(answer == 1)
            {
                
                cout << "(Keisha) - I am so glad to hear that, love!\n";
                
                cout << "         - Let's go on this other road, I feel like we'll find something this way\n\n";
                
                cout << "*You keep walking for a while, until you see a homeless man aproaching you.*\n\n";
                
                cout << "(Sorin) - 'Hello there traveler, I see that you and your gyal seem pretty thirsty and hungry'\n";
                
                cout << "(You) - 'Yes, we are, could you help us?'\n";
                
                cout << "(Sorin) - 'I can, but under one condition!'\n";
                
                cout << "(You) - 'And what condition would that be?'\n";
                
                cout << "(Sorin) - 'You have to beat me at rock,paper,scissors!!'\n";
                
                cout << "(Sorin) - 'If you manage to do that, I will give you food, water and a shelter for the night!'\n";
                
                cout << "(Sorin) - 'But...if you lose, I kill you!'\n";

                int deal;
                
                cout << "*Do you accept Sorin's deal?*" << "\n\n";
                
                cout << "                   1.HELL YES!               2.We'll find those on our own.\n";
                cin >> deal;

                    if(deal == 1)
                    {
                        cout << "*If you draw, you play again! This will happen until someone wins!*\n";

                        cout << "(Sorin) - 'You'll never win!'\n";

                        
                        cout << "(You) - 'Yeah, we'll see about that.'\n";
                        do
                        {
                        srand(time(NULL));

                            cout << "1) Rock\n";
                            
                            cout << "2) Paper\n";
                            
                            cout << "3) Scissors\n";
                            
                            cout << ">>SHOOT! \n";

                            cin >> user;

                        if(!(user >= 1 && user <= 3))
                        {
                            cout << ">>There are only 3 options, wtf are you doing?\n";
                            return 0;
                        }
                        else
                        {
                            sorin = rand() % 3 + 1; //random selection of the 3 options
                            
                            cout << ">>You chose... ";
                            outputChoice(user);
                            cout << endl;
                            
                            cout << ">>Sorin chose... ";
                            outputChoice(sorin);
                            cout << endl;
                            cout << endl;

                            cout << "The result is... " << endl;
                        }
                        if(Win(user,sorin))
                        {
                            cout << "(Sorin) - 'You Won... but I don't have shit, I tricked you, haha!'\n";
                        }
                        else if(Draw(user, sorin))
                        {
                        cout << "(Sorin) - 'That is a draw, let's go again!'\n\n";
                        }
                        else
                        {
                        cout << "(Sorin) - 'You lost mate...Your adventure ends here!'\n\n";
                        cout << "*YOU DIED!*\n";
                        return 0;
                        }
                                
                            


                        }
                        while(user == sorin);//loop in case of draw


                    }
                    else if(deal == 2)
                    {
                        
                        cout << "(Sorin) - 'Okay then, fare well traveler!'\n";

                        
                        cout << "(You) - 'Thank you!'\n\n";

                        
                        cout << ">>Hey, what is that? A fountain? In the middle of the fucking road?! You should go and take a look at it.\n";

                        
                        cout << "(You) - 'There's a ladder that goes down. What should I do...?'\n\n";

                        int decision;

                        
                        cout << "1.Go down the ladder\n";
                        cout << "2.Ignore and continue following the road\n";

                        cin >> decision;

                            if(decision == 1)
                            {
                                cout << "(You) - 'Come on Keisha, let's go in the fountain.'\n";

                                
                                cout << "*You find an underground room with a big door that has a keypad. On the keypad is a sticky note that says: 'The answer to this equation is the code needed to open the door.'*\n";

                                
                                cout << "FUCK!" << "\n\n";

                                
                                cout << ">>What happened idiot? Remember when you were in school and kept saying 'When the fuck am i going to use maths in real live?', well now you're fucked!\n\n";

                                
                                cout << "Fuck off, will you?!\n\n";

                                
                                cout << ">>The equation goes as follows: 'What is the square root of 32400?'\n\n";

                                
                                cout << ">>Just so you don't think I'm a piece of shit, I'll give you 4 options, good luck...You're gonna need it\n\n";

                                int solution;

                                cout << "               1. 180                 2. 925\n";
                                cout << "               3. 1285                4. 165\n";
                                
                                cout << "(You) - 'Fuck it, here it goes!'\n";
                                
                                cout << ">>WAIT! I forgot to mention...if you get the answer wrong you'll get fried...That's it, good luck!\n\n";


                            }

                    }
            }

return 0;
}