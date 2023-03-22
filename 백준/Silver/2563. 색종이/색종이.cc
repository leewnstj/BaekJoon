#include <iostream>
#include <vector>
#include <string>
using namespace std;
int arr[100][100] = {};
int main() {
    int num, num2, num3, result = 0;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> num2 >> num3;
        for (int i = num3; i < num3 + 10; i++) {
            for (int j = num2; j < num2 + 10; j++) {
                if (!arr[i][j]) {
                    result++;
                    arr[i][j] = 1;
                }
            }
        }
    }
    cout << result;
}