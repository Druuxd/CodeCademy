#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

string input = "turpentine and turtles";

vector<char> vowels = {'a','e','i','o','u'};

vector<char> whale_talk;

for(int i = 0; i < input.size(); i++)
{
    for(int v =0; i < vowels.size(); i++)
    {
        if(input[i] == vowels[v])
        {
            whale_talk.push_back(input[i]);
        
            if (input[i] == 'e' || input [i] == 'u') 
            {

                whale_talk.push_back(input[i]);
            }
        }
    }   
}
for(int w = 0; w < whale_talk.size(); w++)
{
cout << whale_talk[w];
}
    return 0;
}