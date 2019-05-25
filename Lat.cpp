#include <iostream>
using namespace std;

const double MINUTE = 60.0;
const double DEGREE = 60.0;

void lat_to_decimal(double degrees, int minutes_of_arc, int seconds_of_arc);

int main()
{
	cout << "Enter a latitude in degrees, minutes, and seconds:\n";
	cout << "First, enter the degrees: ";

	double degrees = 0;

	cin >> degrees;

	cout << "Next, enter the minutes of arc: ";

	int minutes_of_arc = 0;

	cin >> minutes_of_arc;

	cout << "Finally, enter the seconds of arc: ";

	int seconds_of_arc = 0;

	cin >> seconds_of_arc;

	lat_to_decimal(degrees, minutes_of_arc, seconds_of_arc);



}

void lat_to_decimal(double degrees, int minutes_of_arc, int seconds_of_arc)
{
	double decimal_conversion = (double)(degrees + (minutes_of_arc / MINUTE) +
		((seconds_of_arc / (MINUTE*DEGREE))));

	printf("%.0f degrees, %d minutes, %d seconds = %.4f degrees\n", degrees,
		minutes_of_arc, seconds_of_arc, decimal_conversion);
}
