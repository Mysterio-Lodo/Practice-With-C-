#include<iostream>
#include <string>
#include <iomanip>
#include <cstring>
#include "romanType.h"

using namespace std;

void ChooseOutput(romanType& letter);

int main()
{
	romanType roman1;

	string roman;
	string parse;
	string cheese;
	int skip;
	//int i;

	cout << "Give me a roman Numeral bitch " << endl;
	cin  >> roman;

	roman1.acceptNumeral(roman);

	// Keep for later cout << roman1.getRoman() << endl;

	skip = roman1.convertRoman();

	if (skip == -100)
	{
		return 0;
	}
	ChooseOutput(roman1);





return 0;
}

//Function allows user to choose output of letter or decimal values
void ChooseOutput(romanType& letter)
{

	int decision;

	cout <<endl << "You have successfully converted you're goodies." << endl << endl;
	cout << "Now choose your output: " << endl;
	cout << "1. For Roman Numerals." << endl;
	cout << "2. For Decimal Value." << endl;
	cout << endl;

	cin  >> decision;

	if (decision == 1)
	{
		cout << letter.getRoman();
	}
	else if (decision ==2)
	{
		cout << letter.getDecimal();
	}
	else
	{
		cout << "Wrong Choice FOOOLLLL!!!!" << endl << endl;
	}



}

