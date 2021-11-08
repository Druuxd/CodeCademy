#include <iostream>
using namespace std;

int main()
{

    int year;
    cin >> year;

if(year > 1000)
{
    if(year % 100 == 0 && year % 400 == 0)
        {
            cout << "Leap year";
        }
    else{
            cout << "Not a leap year";
    }
}
else{
    cout << "invalid";
}
    return 0;
}