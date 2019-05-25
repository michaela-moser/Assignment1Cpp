#include <iostream>
using namespace std;
void time(int hours, int minutes);

int main()
{
	cout << "Enter the number of hours: ";

	int hours = 0;

	cin >> hours;
	cout << "\n";

	cout << "Enter the number of minutes: ";

	int minutes = 0;

	cin >> minutes;
	cout << "\n";

	time(hours, minutes);

}

void time(int hours, int minutes)
{
	int time_in_hours = hours;
	int time_in_minutes = minutes;

	printf("Time: %d:%d\n", time_in_hours, time_in_minutes);
}
