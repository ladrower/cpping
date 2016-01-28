
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <limits>

using namespace std;
 
int main() 
{
	srand(time(NULL));

    const int kRandMax = 100;
    int input_var = 0;
    int random_variable = rand() % kRandMax + 1;

    cout << "There is some random number on [1 " << kRandMax << "]: " << endl;

  	while(true) {

  		cout << "\nPlease enter your guess: ";

  		if (!(cin >> input_var)) {
	      cout << "You entered a non-numeric." << endl;
	      cin.clear();
	      cin.ignore(numeric_limits<streamsize>::max(), '\n');
	      continue;
	    }

	    if (input_var != random_variable) {
			cout << "Your guess is " << (input_var > random_variable ? "higher" : "lower") << " than that variable" << endl;
			continue;
	    }

		cout << "Yoohoo! You are right. The number is  " << random_variable << endl;
	    break;
  	}


}