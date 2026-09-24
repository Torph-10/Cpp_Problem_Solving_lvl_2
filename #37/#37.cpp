#include <iostream>
#include <string>
using namespace std;

void read_numbers(string mess)
{
	float numbers = 0;
	float total = 0;
	int i = 1;
	do
	{
		cout << mess << to_string(i) << endl;
		cin >> numbers;
		if (numbers == -99)
			break;
		total += numbers;
		i++;
	} while (numbers != -99);
	cout << total;
}
int main()
{
	read_numbers("Please enter number ");

	return (0);
}