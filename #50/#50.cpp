#include <iostream>
#include <string>
using namespace std;

void read_ATMPIN(string mess)
{
	int ATM_PIN = 0;
	int i = 1;
	cout << mess;
	cin >> ATM_PIN;
	do
	{
		if (i >= 3)
		{
			cout << "Card is Locked\n";
			break;
		}
		else if (ATM_PIN == 1234)
			cout << "Your Balance is : 7500\n";
		else
		{
			cout << "Wrong PIN!!\nPlease enter PIN\n";
			cin >> ATM_PIN;
		}
		i++;
	} while (ATM_PIN != 1234);
}
int main()
{
	read_ATMPIN("Please enter the ATM PIN ?\n");

	return (0);
}