#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a, b;
	int s = 0, e = 0;
	cin >> a >> b;
	s = stoi(a.back() + a.substr(1,1) + a.front());
	e = stoi(b.back() + b.substr(1, 1) + b.front());
	if (s > e)
	{
		cout << s;
	}
	else {
		cout << e;
	}
}