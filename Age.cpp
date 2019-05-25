
#include <iostream>
using namespace std;

int main()
{

	cout << "What is your age?\n";

	int age = 0;

	cin >> age;

	int months = 12;
	int age_in_months = 0;

	age_in_months = (age)* months;

	printf("You're age in months is %d. \n", age_in_months);
}