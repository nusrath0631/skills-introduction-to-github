#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
    if (n < 2)
    return false;
    if (n == 2)
    return true;
    if (n % 2 == 0)
    return false;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return false;
    return true;
}
int reverse_number(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
    int n;
    while (cin >> n) {
        if (!is_prime(n)) {
            cout << n << " is not prime." << endl;
        } else {
            int rev = reverse_number(n);
            if (rev != n && is_prime(rev))
                cout << n << " is emirp." << endl;
            else
                cout << n << " is prime." << endl;
        }
    }
    return 0;
}

