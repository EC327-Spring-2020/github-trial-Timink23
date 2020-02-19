#include <iostream>

using namespace std;

int main() {
	int n;
	int first_term = 0;
	int second_term = 1;
	int next_term = 0;
	cout << "Enter the length of the sequence: ";
	cin >> n;
	if (cin.fail()) {
		cout << "Error! You did not provide a number.\n";//if its not a number, it will fail
	}

	for (int i = 1; i <= n; ++i) {//loops through the numbers
		if (i == 1) 
		{
			cout << first_term << endl;
		}
		else if (i == 2) 
		{
			cout << second_term << endl;
		}
		else 
		{
			next_term = first_term + second_term;//does the fibonacci
			first_term = second_term;
			second_term = next_term;
			cout << next_term << endl;
		}
	}
	
	return 0;
}