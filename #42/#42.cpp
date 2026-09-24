#include <iostream>
#include <string>
using namespace std;

int read_task_duration_in_second(string mess)
{
	int number;

	cout << mess;
	cin >> number;

	return (number);
}
void calculate_duration_in_second()
{
	int days   = (read_task_duration_in_second("Please enter dqys \n")) * 24 * 60 * 60;
	int hours  = (read_task_duration_in_second("Please enter hours \n")) * 60 * 60;
	int minuts = (read_task_duration_in_second("Please enter minuts \n")) * 60;
	int seconds = read_task_duration_in_second("Please enter second \n");

	cout << days + hours + minuts + seconds << " Seconds" << endl;
}

int main()
{
	calculate_duration_in_second();

	return (0);
}