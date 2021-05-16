#include <iostream>
#include <string>
using namespace std;

int main() {

	int newNum = 0;
	int num[100];
	string newInput;
	string input[100];
	int libs = 0;
	int run = 1;

	while (newInput != "quit") {
		
		cin >> newInput;
		cin >> newNum;

		
		input[libs] = newInput;
		num[libs] = newNum;

		libs++;
	}
	for (int i = 0; i < libs - 1; i++) {
		cout << "Eating " << num[i] << " " << input[i] << " a day keeps you happy and healthy." << endl;
	}



	return 0;
}

/*
Mad Libs are activities that have a person provide various words, which are then used to complete a short story in unexpected (and hopefully funny) ways.

Write a program that takes a string and integer as input, and outputs a sentence using those items as below. The program repeats until the input is quit.

Ex: If the input is:

apples 5
shoes 2
quit 0

the output is:

Eating 5 apples a day keeps you happy and healthy.
Eating 2 shoes a day keeps you happy and healthy.

*/