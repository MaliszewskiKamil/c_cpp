#include <random>
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int password_length;
const char* const small_characters[24] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "r", "s", "t", "u", "w", "x", "y", "z"};
const char* const capital_characters[24] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "R", "S", "T", "U", "W", "X", "Y", "Z"};
const char* const special_characters[24] = {"!", "@", "#", "%", "^", "&", "*", "(", ")", "-", "+", "_", "[", "{", "]", "}", ":", ";", "=", "'", "<", ",", ".", "."};
const char* const numbers[10] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "0"};
const int max_range = 24;

int random_integer;
int random_choose_set;
string password;

int main(){
  cout << "Choose a length of a password: ";
  cin >> password_length;
  
  srand(time(NULL));

  for(int i = 0; i<password_length; i++){

    random_integer = rand() % max_range; 

    random_choose_set = rand() % 4;
    if(random_choose_set == 0){
      password += small_characters[random_integer];

    }

    if(random_choose_set == 1){
      password += capital_characters[random_integer];
    }

    if(random_choose_set == 2){
      password += special_characters[random_integer];
    }

    
    if(random_choose_set == 3){
      random_integer = rand() % 10; 
      password += numbers[random_integer];
    }
  }

  cout << endl << password << endl;

  return 0;

}
