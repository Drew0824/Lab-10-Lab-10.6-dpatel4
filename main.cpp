#include <iostream>
using namespace std;

int main() {
  
  string name;
  char number;
  

  cout << "Hi, what's your name?" << endl;
	cin >> name;
  
  
  cout <<"Pick a number between 1 and 5:" << endl;
  cin >> number;

  switch( number )  // This is where the switch statement begins
  {
    case '1': cout << "Hello " << name << endl;
              break;
  	case '2': cout << "Hey " << name << endl;
  		       break;
  	case '3': cout << "Greetings " << name << endl;
  		       break;
  	case '4': cout << "Howdy! " << name << endl;
  	   	     break;          
    case '5': cout << "Whats up " << name << endl;
  		      break;
  
  }

}