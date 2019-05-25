#include <iostream>
using namespace std;

void miles_per_gallon(double miles_driven, double gallons_used);

int main()
{
	double miles_driven = 0;
	double gallons_used = 0;

	cout << "How many miles have you driven?:";
	cin >> miles_driven;

	cout << "How many gallons of gasoline have you used?:";
	cin >> gallons_used;

	miles_per_gallon(miles_driven, gallons_used);
	return 0;
}
void miles_per_gallon(double miles_driven, double gallons_used)
{
	double milespergallon = miles_driven / gallons_used;

	printf("You're motor vehicle has gotten %.2f miles per gallon.\n", milespergallon);
}
