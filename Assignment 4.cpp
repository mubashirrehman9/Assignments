/*
Write a C++ program that enter a number(from 1 to 12) from the userand
display the name of day of the month at that number in output assuming 1 as
January and 12 as December, using switch statement.
*/
#include <iostream>
using namespace std;

int main() {
	const char* month[12] = { "January","February","March","April","May","June","July",
			"August","September","October","November","December" };
	int num = 1;
	cout << "Enter a Number ( 1 - 12 )\n";
	cin >> num;
	switch (num) {
		case 1:
			cout << month[0];
			break;
		case 2:
			cout << month[1];
			break;
		case 3:
			cout << month[2];
			break;
		case 4:
			cout << month[3];
			break;
		case 5:
			cout << month[4];
			break;
		case 6:
			cout << month[5];
			break;
		case 7:
			cout << month[6];
			break;
		case 8:
			cout << month[7];
			break;
		case 9:
			cout << month[8];
			break;
		case 10:
			cout << month[9];
			break;
		case 11:
			cout << month[10];
			break;
		case 12:
			cout << month[11];
			break;
		default:
			cout << "Choose a Number between 1 - 12";
	}
	cout << "\n";
	return 0;
}
