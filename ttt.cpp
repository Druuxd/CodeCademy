#include <iostream>
#include <stdlib.h>
using namespace std;

char board [3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

int choice;
int row,column;
char turn = 'X';
bool draw = false;


void display_board(){

cout << "      |     |     \n";
cout <<"   " << board[0][0] <<"  |  "<< board [0][1] << "  |  " <<board[0][2] << "\n";
cout <<"______|_____|______\n";
cout <<"      |     |      \n";
cout << "   " <<board[1][0] <<"  |  "<< board [1][1] << "  |  "<<board[1][2] << endl;
cout <<"______|_____|______\n";
cout <<"      |     |      \n";
cout << "   " <<board[2][0] <<"  |  "<< board [2][1] << "  |  "<<board[2][2] << endl;
cout <<"      |     |      \n";

}

void playerTurn(){

    if(turn == 'X')
        cout << "It's player 1's turn (X): ";
    else if (turn == 'O')
        cout << "It's player 2's turn (O): ";

    cin >> choice;

    switch (choice){
        case 1:
        row = 0;
        column = 0;
        break;
    case 2:
        row = 0;
        column = 1;
        break;
    case 3:
        row = 0;
        column = 2;
        break;
    case 4:
        row = 1;
        column = 0;
        break;
    case 5:
        row = 1;
        column = 1;
        break;
    case 6:
        row = 1;
        column = 2;
        break;
    case 7:
        row = 2;
        column = 0;
        break;
    case 8:
        row = 2;
        column = 1;
        break;
     case 9:
        row = 2;
        column = 2;
        break;
    default:
        cout << "Invalid move!";
    }

    if(turn == 'X' && board[row][column] != 'O' && board[row][column] != 'X'){
        board[row][column] = 'X';
        turn = 'O';
    }
    else if(turn == 'O' && board[row][column] != 'O' && board[row][column] != 'X'){
        board[row][column] = 'O';
        turn = 'X';
    }
    else{
        cout << "This place is already occupied!\n Please choose another!\n\n";
        playerTurn();
    }
}
bool gameOver(){

for(int i = 0; i < 3; i++)
    if(board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i]){
    return false;
    }
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
    return false;

    for(int i = 0;i<3;i++)
    for(int j = 0;i<3;i++)
    if(board[i][j] != 'X' && board[i][j] != 'O')
    return true;

    draw = true;
    return false;
    

}

int main()
{
    cout << "TIC-TAC-TOE!";
    while(gameOver()){
        display_board();
        playerTurn();
        gameOver();
    }
    if(turn == 'X' && draw == false)
        cout << "Congratulations Player 2, You Won!\n";
    else if(turn == 'O' && draw==false)
        cout << "Congratulations Player 1, You Won!\n";
    else
        cout << "It's a Draw!\n";
}