#include <iostream>
using namespace std;

int main()
{

int planet;
float weight,new_weight,gravity;

cout << "What is your weight (kg): "; cin >> weight;
cout << "What is the number of the planet you want to fight on? "; cin >> planet;



switch (planet){

    case 1 :
        gravity = 0.38;
        new_weight = weight * gravity;
        cout << "Your weight on planet Mercury is: " << new_weight << "\n";
        break;
    case 2 :
        gravity = 0.91;
        new_weight = weight * gravity;
        cout << "Your weight on planet Venus is: " << new_weight << "\n";
        break;
    case 3 :
        gravity = 0.38;
        new_weight = weight * gravity;
        cout << "Your weight on planet Mars is: " << new_weight << "\n";
        break;
    case 4 :
        gravity = 2.34;
        new_weight = weight * gravity;
        cout << "Your weight on planet Jupiter is: " << new_weight << "\n";
        break;
    case 5 :
        gravity = 1.06;
        new_weight = weight * gravity;
        cout << "Your weight on planet Saturn is: " << new_weight << "\n";
        break;
    case 6 :
        gravity = 0.92;
        new_weight = weight * gravity;
        cout << "Your weight on planet Uranus is: " << new_weight << "\n";
        break;
    case 7 :
        gravity = 1.19;
        new_weight = weight * gravity;
        cout << "Your weight on planet Neptune is: " << new_weight << "\n";
        break;
    default :
        cout << "INVALID\n";
        break;
}



    return 0;
}