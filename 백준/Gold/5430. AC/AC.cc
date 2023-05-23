#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include<deque>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, t;

    cin >> t;
    while (t--) {
        string order, str;
        bool isReverse = false, isError = false;
        deque<int> deq;
        cin >> order;
        cin >> n;
        cin >> str;
        string s = "";
        for (int i = 0; i < str.length(); i++) {

            if (isdigit(str[i])) {
                s += str[i];

            }
            else {
                if (!s.empty()) {
                    deq.push_back(stoi(s));
                    s = "";
                }
            }
        }
        for (auto o : order) {
            if (o == 'R') {
                if (isReverse)
                    isReverse = false;
                else
                    isReverse = true;
            }
            else {
                if (deq.empty()) {
                    cout << "error" << '\n';
                    isError = true;
                    break;
                }
                if (isReverse)
                    deq.pop_back();
                else
                    deq.pop_front();
            }
        }
        if (!isError) {
            cout << '[';
        }
        if (isReverse && !deq.empty()) {
            for (auto o = deq.rbegin(); o != deq.rend(); o++) {
                if (o == deq.rend() - 1)
                    cout << *o;
                else
                    cout << *o << ',';
            }
        }
        else if (!isReverse && !deq.empty()) {
            for (auto o = deq.begin(); o != deq.end(); o++) {
                if (o == deq.end() - 1)
                    cout << *o;
                else
                    cout << *o << ',';
            }
        }
        if (!isError)
            cout << "]\n";

    }
}
