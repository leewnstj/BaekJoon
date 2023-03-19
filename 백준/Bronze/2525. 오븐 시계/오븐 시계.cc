#include<iostream>
using namespace std;;

int main()
{
	int h, m;
	int t;

	cin >> h >> m;
	cin >> t;
	int add1 = m + t;

		if (0 <= t && t <= 1000 && 0 <= h && h <= 23 && 0 <= m && m <= 59)

		{

			h = h + (add1 / 60);

			m = add1 % 60;

			h = h % 24;

		}

		else
			return 0;

	cout << h << " " << m;

	return 0;

}