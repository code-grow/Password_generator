#include <iostream>
#include <string>
#include <random>

using namespace std;

int main() {
    while(true){
  // Define the characters that can be used in the password.
  string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.!@#$%^&*()-+";

  int length;
  cout << "Enter the length of the password: ";
  cin >> length;


  string password;
  for (int i = 0; i < length; i++) {
    password += characters[rand() % characters.length()];
  }

  cout << "The strong password is: " << password << '\n' << '\n';
    }
  return 0;
}
