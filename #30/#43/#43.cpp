#include <iostream>
#include <string>
using namespace std;

int read_seconds(string mess)
{
	int seconds = 0;
	cout << mess;
	cin >> seconds;

	return (seconds);
}
void calculate_seconds()
{
	int t_seconds = read_seconds("Please enter total seconds ?\n");
	int reminder = 0;

	cout << t_seconds / 86400 << " : ";
	reminder = t_seconds % 86400;
	cout << reminder / 3600 << " : ";
	reminder = t_seconds % 3600;
	cout << reminder / 60 << " : ";
	reminder = t_seconds % 60;
	cout << reminder << endl;
}
int main()
{
	calculate_seconds();

	return (0);
}