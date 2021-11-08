#include <iostream>
using namespace std;
// Define is_palindrome() here:
bool is_palindrome(string text)
{

    string reversed;
    for(int i = text.size()-1;i >= 0; i--){
        reversed += text[i];
    }
    if(reversed == text){
        return true;
    }
return false;

}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}