#include <iostream>
using namespace std;

int main()
{
	int rows, columns;
	cout << "Enter number of rows: ";
	cin >> rows;

	cout << "Enter number of columns : ";
	cin >> columns;

	for (int i = 0; i <= rows; i++)
	{
		for (int j = 0; j <= columns; j++)
		{
			if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))
				cout << "#";
			else
				cout << "*";
		}
		cout << "\n";
	}
	return 0;
}
