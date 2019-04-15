// This program was written by Emmanuel Idehen
// this program generates a random number and ask the user to guess the number 
//This program is a Random Number Guessing Game.
//it is due 3/18/2016
// it was submitted 3/18/2016





#include <iostream>
#include <cstdlib> // for rand
#include <ctime> // for time
#include <cmath>

using namespace std;
int main()
{
	int num1;  // random number to be generated
	unsigned seed;
	int Ans;
	
    // time changes the random number every time it is run
	seed=time(0);
	srand(seed);
	
	// ouputs two random number between 1 and 100
	num1 = (rand() % 100) + 1;
	
	
	// tell user to guess
	cout << "guess the random number generated" << endl;
	cin >> Ans;
	// returns the user if the answer was too high or too low.
	while (Ans != num1)
	{	
		//if the answer is too low
		if (num1 > Ans)
		{
			cout << "Too low " << endl;
		
		}
		//if the answer is too high
		if (num1 < Ans)
		{
			cout << "Too high " << endl;
		
		}
		// when the answer is wrong
		cout << " try another guess " << endl;
		cin >> Ans;
	}	
	// if the answer is right 
	if(Ans == num1)
		cout << " congratulations, you figured out my number " << endl;

	

  return 0;
}
/*
guess the random number genarated
54
Too high
 try another guess
40
Too high
 try another guess
30
Too high
 try another guess
20
Too high
 try another guess
10
Too low
 try another guess
15
Too high
 try another guess
13
Too low
 try another guess
14
 congratulation,you figured out my number
Press any key to continue . . .
*/

/*guess the random number genarated
50
Too low
 try another guess
60
Too low
 try another guess
70
Too high
 try another guess
65
Too high
 try another guess
63
 congratulation, you figured out my number
Press any key to continue . . .*/









