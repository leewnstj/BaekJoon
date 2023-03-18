#include <iostream>
using namespace std;


int factorial(int n)
{
    if (n == 0)
        return 0;
    else if (n <= 2)
        return 1;
    else
    return factorial(n-1) + factorial(n-2);
}

int main() {
    int num;
    cin >> num;
    cout << factorial(num);
}