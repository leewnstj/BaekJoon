#include <iostream>
using namespace std;

int main()
{
	int MaxM, n, a, b, mm = 0;
	cin >> MaxM;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		mm += a * b;
	}
	if (mm == MaxM)
		cout << "Yes";
	else
		cout << "No";
}