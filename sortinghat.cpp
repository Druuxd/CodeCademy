#include <iostream>
using namespace std;

int main(){

    int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0;
    int answer1,answer2,answer3,answer4;


    cout << "===============\n";
    cout << "The Sorting Hat\n";
    cout << "===============\n\n";
    
  // ~~~~~~~~~~ Question 1 ~~~~~~~~~~

    cout << "Q1) When I'm dead, I want people to remember me as: \n" << "  1) The Good\n" << "  2) The Great\n" << "  3) The Wise\n" << "  4) The Bold\n";
    cin >> answer1;

        if(answer1 == 1)
        {
            hufflepuff++;
        }
        else if(answer1 == 2)
        {
            slytherin++;
        }
        else if(answer1 == 3)
        {
            ravenclaw++;
        }
        else if(answer1 == 4)
        {
            gryffindor++;
        }
        else
        {
            cout << "Invalid input.";
            return 0;
        }
  // ~~~~~~~~~~ Question 2 ~~~~~~~~~~

    cout << "Q2) Dawn or Dusk: \n" << "  1) Dawn\n" << "  2) Dusk\n";
    cin >> answer2;

        if(answer2 == 1)
        {
            gryffindor++;
            ravenclaw++;
        }
        else if(answer2 == 2)
        {
            hufflepuff++;
            slytherin++;
        }
        else
        {
            cout << "Invalid input.";
            return 0;
        }

  // ~~~~~~~~~~ Question 3 ~~~~~~~~~~

    cout << "Q3) Which kind of instrument most pleases your ear? \n" << "  1) The violin\n" << "  2) The trumpet\n" << "  3) The piano\n" << "  4) The drum\n";
    cin >> answer3;

        if(answer1 == 1)
        {
            slytherin++;
        }
        else if(answer1 == 2)
        {
            hufflepuff++;
        }
        else if(answer1 == 3)
        {
            ravenclaw++;
        }
        else if(answer1 == 4)
        {
            gryffindor++;
        }
        else
        {
            cout << "Invalid input.";
            return 0;
        }
  // ~~~~~~~~~~ Question 4 ~~~~~~~~~~
  
        cout << "Q4) Which road tempts you most? \n" << "  1) The wide, sunny grassy lane\n" << "  2) The narrow, dark, lantern-lit alley\n" << "  3) The twisting, leaf-strewn path through woods\n" << "  4) The cobbled street lined (ancient buildings)\n";
        cin >> answer4;

        if(answer1 == 1)
        {
            hufflepuff++;
        }
        else if(answer1 == 2)
        {
            slytherin++;
        }
        else if(answer1 == 3)
        {
            gryffindor++;
        }
        else if(answer1 == 4)
        {
            ravenclaw++;
        }
        else
        {
            cout << "Invalid input.";
            return 0;
        }

  // ========== Sorting ==========
            int max=0;
            string house;

cout << "\nCongrats on being sorted into... ";

        if (gryffindor > max) {
 
        max = gryffindor;
        house = "Gryffindor";
 
        }
 
        if (hufflepuff > max) {
 
        max = hufflepuff;
        house = "Hufflepuff";
 
        }
 
        if (ravenclaw > max) {
 
        max = ravenclaw;
        house = "Ravenclaw";
 
        }
 
        if (slytherin > max) {
 
        max = slytherin;
        house = "Slytherin";

        }
 
        cout << house << "!\n";


    return 0;
    
}