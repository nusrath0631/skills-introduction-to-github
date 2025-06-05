#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
long long k[N];

int main() {
    int n;
    long long t;
    cin >> n >> t;

    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }

    long long low = 1;
    long long high = *max_element(k, k + n) * t;
    long long ans = high;

    while (low <= high) {
        long long mid = (low + high) / 2;
        long long total = 0;

        for (int i = 0; i < n; i++) {
            if (mid / k[i] > t - total) {   // changed
                total = t;
                break;
            }
            total += mid / k[i];
        }

        if (total >= t) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}

