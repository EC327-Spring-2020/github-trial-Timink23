#include <iostream>

using namespace std;

int main() {

	float first_digit;
	float second_digit;
	char operators;

	cout << "Enter an expression to evaluate: ";
	cin >> first_digit;
	if (cin.fail()) {
		cout << "Error! You did not provide two numerals as operands." << endl << endl;
		
		return 0;
	}
	cin >> operators;
	cin >> second_digit;
	if (cin.fail()) {
		cout << "Error! You did not provide two numerals as operands." << endl << endl;
		
		return 0;

	}
//all the possible scenarios
	if (operators == '*') 
	{
		cout << "Result: " << first_digit * second_digit;
	}
	else if (operators == '/')
	{
		if (second_digit == 0) 
		{
			cout << "Error! You can't divide a number by 0!";
		}
		else 
		{
			cout << "Result: " << first_digit / second_digit;
		}
	}
	else if (operators == '+')
	{
		cout << "Result: " << first_digit + second_digit;
	}
	else if (operators == '-')
	{
		cout << "Result: " << first_digit - second_digit;
	}
	else 
	{
		cout << "Error! '" << operators << "' is not a supported operator.";
	}

	return 0;
}