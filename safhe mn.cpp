#include <iostream>

using namespace std;

int lcm(int a, int b);

int main()
{
	int n, m, buf;
	cout << "Please enter Two numbers...:";
	cin >> n >> m;
	buf = lcm(n, m);
	cout << "The LCM is : " << buf;

	return 0;
}

int lcm(int a, int b)
{
	int l;
	if (a > b) l = a;
	else l = b;

	while (true)
	{
		if ((l % a == 0) && (l % b == 0)) break;

		l++;
	}
	return l;
}