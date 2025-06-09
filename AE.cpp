#include <bits/stdc++.h>
using namespace std;

long long mod_exp(long long B, long long P, long long M) {
    long long result = 1;
    B = B % M;
    while (P > 0) {
        if (P % 2 == 1) {
            result = (result * B) % M;
        }
        B = (B * B) % M;
        P = P / 2;
    }
    return result;
}

int main() {
    long long B, P, M;
    while (cin >> B >> P >> M) {
        cout << mod_exp(B, P, M) << endl;
    }
    return 0;
}

