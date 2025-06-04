/*#include <iostream>
#include <deque>
#include <string>
#include <sstream>*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int num = 1; num <= t; ++num) {
        int n, m;
        cin >> n >> m;
        deque<int> dq;

        cout << "Case " << num << ":" << endl;

        for (int i = 0; i < m; ++i) {
            string line;
            getline(cin >> ws, line);
            stringstream ss(line);
            string com;
            ss >> com;

            if (com == "pushLeft") {
                int x;
                ss >> x;
                if (dq.size() < n) {
                    dq.push_front(x);
                    cout << "Pushed in left: " << x << endl;
                } else {
                    cout << "The queue is full" << endl;
                }
            } else if (com == "pushRight") {
                int x;
                ss >> x;
                if (dq.size() < n) {
                    dq.push_back(x);
                    cout << "Pushed in right: " << x << endl;
                } else {
                    cout << "The queue is full" << endl;
                }
            } else if (com == "popLeft") {
                if (!dq.empty()) {
                    cout << "Popped from left: " << dq.front() << endl;
                    dq.pop_front();
                } else {
                    cout << "The queue is empty" << endl;
                }
            } else if (com == "popRight") {
                if (!dq.empty()) {
                    cout << "Popped from right: " << dq.back() << endl;
                    dq.pop_back();
                } else {
                    cout << "The queue is empty" << endl;
                }
            }
        }
    }
    return 0;
}
