#include <iostream>
using namespace std;

int main()
{
	int arr[9][9] = {}, s = 0;
	int idx = 0, idx1 = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] >= s)
			{
				s = arr[i][j];
				idx = i + 1;
				idx1 = j + 1;
			}
		}
	}

	cout << s << endl << idx << " " << idx1;
}