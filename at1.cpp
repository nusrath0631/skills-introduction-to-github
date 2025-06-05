#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;

    ll low = 1, high = (ll)n * n;
    ll ans = 0;
    ll t = ((ll)n * n + 1) / 2;

    while (low <= high) {
        ll mid = low + (high - low) / 2;
        ll count = 0;

        for (int i = 1; i <= n; ++i) {
            count += min(mid / i, (ll)n);
        }

        if (count >= t) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}

