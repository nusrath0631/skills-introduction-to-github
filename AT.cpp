#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    int low = 1, high = n * n;
    int x = 0;

    int target = (n * n + 1) / 2;

    while (low <= high) {
        int mid = (low + high) / 2;
        ll count = 0;
        for (int i = 1; i <= n; ++i) {
            count += min(n, mid / i);
        }
        if (count >= target) {
            x = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << x << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    int low = 1, high = n * n;
    int ans = 0;

    int target = (n * n + 1) / 2; // Middle index

    while (low <= high) {
        int mid = (low + high) / 2;
        ll count = 0;
        for (int i = 1; i <= n; ++i) {
            count += min(n, mid / i); // Elements ≤ mid in row i
        }
        if (count >= target) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}
#include <iostream>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;

    int low = 1, high = n * n;
    int ans = 0;

    ll target = (1LL * n * n + 1) / 2; // Make sure it's a 64-bit calculation

    while (low <= high) {
        int mid = (low + high) / 2;
        ll count = 0;

        for (int i = 1; i <= n; ++i) {
            count += min(n, mid / i); // Count numbers <= mid in row i
        }

        if (count >= target) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}


