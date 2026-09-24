#include <iostream>
#include <string>
using namespace std;

int read_ATM_PIN(string mess)
{
	int ATM_PIN = 0;
	cout << mess;
	cin >> ATM_PIN;
	do
	{
		if (ATM_PIN != 1234)
		{
			cout << "wrong PIN!!\nPLease enter PIN\n";
			cin >> ATM_PIN;
		}
		else
			break;
	} while (ATM_PIN != 1234);
	return (ATM_PIN);
}

int main()
{
	read_ATM_PIN("Please enter ATM PIN\n");
	cout << "Your Balance is : 7500\n" ;
}