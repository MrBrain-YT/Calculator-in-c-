#include <iostream>

using namespace std;

void summ(float num1, float num2);
void sub(float num1, float num2);
void multiplication(float num1, float num2);
void division(float num1, float num2);

int main() {
	// Create main while
	while (true)
	{
		char action;
		cout << "Select an action from the available ones (+, -, *, /) : ";
		cin >> action;

		float first_num;
		cout << "Please enter first number: ";
		cin >> first_num;

		float two_num;
		cout << "Please enter two number: ";
		cin >> two_num;

		switch (action)
		{
		case '+': summ(first_num, two_num); break;
		case '-': 
			
			sub(first_num, two_num); break;
		case '*': multiplication(first_num, two_num); break;
		case '/': 
			try
			{
				division(first_num, two_num); break;
			}
			catch (int e)
			{
				if (e == 1) {
					cout << "\033[1;31mDivision by 0 is not allowed\033[0m" << endl;
				}
			}
			break;
		default:
			cout << "\033[1;31mAction not recognized\033[0m" << endl;
		}
	}
	return 0;
}

void summ(float num1, float num2) {
	cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
}

void sub(float num1, float num2) {
	cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
}

void multiplication(float num1, float num2) {
	cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
}

void division(float num1, float num2) {
	if (num2 == 0) throw 1;
	else {
		cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
	}
}
