///////// Jordan Steer-Furderer
///////// The purpose of this program is to determine whether or not there is a vowelpresent in the
///////// first two indices of the user input string
///////// ** I'm still working on getting the program to
///////// return false when nothing/spacebar is entered **

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

char isThereAVowel(string userInput){



int index = 0;

//if (index == 0)

//{
//if (userInput.at(index) == n );

  //  return cout << "FALSE" << endl;

   //}

if (userInput.at(index) == 'a' || userInput.at(index) == 'e' ||
    userInput.at(index) == 'i' ||
    userInput.at(index) == 'o' || userInput.at(index) == 'u'){
    return cout << "TRUE" << endl;
    }

if (userInput.length() == 1){
    return cout << "FALSE" << endl;
    }


if (userInput.at(index + 1) == 'a' || userInput.at(index + 1) == 'e' ||
    userInput.at(index + 1) == 'i' ||
    userInput.at(index + 1) == 'o' || userInput.at(index + 1) == 'u'){
   return cout << "TRUE" << endl;
    }


if (userInput.at(index + 1) != 'a' || userInput.at(index + 1) != 'e' || userInput.at(index + 1) != 'i' ||
    userInput.at(index + 1) != 'o' || userInput.at(index + 1) != 'u' || userInput.at(index + 1) == ' '){
  return cout << "FALSE" << endl;
    }

}


int main()

{

string userInput;
cout << "enter a phrase and I'll tell you if the first two letters contain a vowel" << endl;
cin >> userInput;

char vowelDetector = isThereAVowel(userInput);

cout << vowelDetector << endl;


return 0;
}
