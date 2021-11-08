#include <iostream>

using namespace std;

int main() {

float pesos,reais,soles,dollars,conv1,conv2,conv3;

conv1 = 0.00026;
conv2 = 0.19;
conv3 = 0.25;

cout << "Enter number of Colombian Pesos: \n";
cin >> pesos;

cout << "Enter number of Brazilian Reais: \n";
cin >> reais;

cout << "Enter number of Peruvian Soles: \n";
cin >> soles;


dollars = (conv1 * pesos) + (conv2 * reais) + (conv3 * soles);
cout << "US Dollars = $" << dollars << "\n";

  return 0;
}