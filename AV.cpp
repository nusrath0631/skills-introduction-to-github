/*#include <iostream>
#include <map>*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        map<int, int> fc;

        for (int i = 0; i < N; i++) {
            int num;
            cin >> num;

            for (int j = 2; j * j <= num; j++) {
                while (num % j == 0) {
                    fc[j]++;
                    num /= j;
                }
            }
            if (num > 1) {
                fc[num]++;
            }
        }

        long long res = 1;
        for (auto& p : fc) {
            res *= (p.second + 1);
        }

        cout << res << "\n";
    }

    return 0;
}

