//#include <iostream>
//#include <cmath>
#include <bits/stdc++.h>
using namespace std;
bool isPrime(long long num) {
    if (num < 2)
        return false;
    for (long long i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    long long x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        long long r = sqrt(x);

        if (r * r == x && isPrime(r))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

