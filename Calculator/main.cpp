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
		case '-': sub(first_num, two_num); break;
		case '*': multiplication(first_num, two_num); break;
		case '/': division(first_num, two_num); break;

		default:
			break;
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
	cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
}
