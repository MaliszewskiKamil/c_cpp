#include <random>
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int password_length;
const char* const small_characters[24] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "r", "s", "t", "u", "w", "x", "y", "z"};
const char* const capital_characters[24] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "R", "S", "T", "U", "W", "X", "Y", "Z"};
const int min_range = 0;
const int max_range = 24;
int random_integer;
int random_choose_set;
string password;

int main(){
  cout << "Choose a length of a password: ";
  cin >> password_length;
  
  srand(time(NULL));

  for(int i = 0; i<password_length; i++){

    random_integer = rand() % max_range + 1; 
    random_choose_set = rand() % 2;
    if(random_choose_set == 0){
      password += small_characters[random_integer];
    }

    if(random_choose_set == 1){
      password += capital_characters[random_integer];
    }
  }

  cout << password;
 


  return 0;

}
