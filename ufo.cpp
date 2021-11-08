#include <iostream>
#include "ufo_functions.hpp"
using namespace std;


int main() {

    greet();

    string codeword = "Daniel";
    string answer = "______";

    int misses = 0;
    vector<char> incorrect;
    bool guess = false;
    char letter;
    while(answer != codeword && misses < 7){
        display_misses(misses);
        display_status(incorrect,answer);
        cout << "Please enter your guess: \n";
        cin >> letter;
        for(int i = 0;i < codeword.size(); i++){
            if(codeword[i] == letter){
                answer[i] = letter;
                guess = true;
            }
        }
        if(guess)
        {
            cout << "\n Correct! You're closer to cracking the codeword.\n";
        }
        else
        {
            cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
            incorrect.push_back(letter);
            misses++;
        }
        guess = false;
    }
    end_game(answer, codeword);



    return 0;
}
