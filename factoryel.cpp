#include <iostream>

using namespace std;

bool isFact(int n);

int main()
{
	int n;
	cout << "Please enter your number ... : ";
	cin >> n;

	bool rec = isFact(n);

	if (rec == 1)
	{
		cout << "Yeah\n";
	}
	else
	{
		cout << "Nope\n";
	}

	return 0;
}


bool isFact(int n)
{
	for (int i = 1;; i++)
	{
		if (n % i == 0)
		{
			n /= i;
		}
		else
		{
			break;
		}
	}
	if (n == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}