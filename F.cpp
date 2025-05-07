#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        int n, m;
        cin >> n >> m;

        int a = n / (2 * m);

        int sum = m * (m + 1) / 2;
        int sum1 = (2 * m) * (2 * m + 1) / 2 - sum;
        int b = sum1 - sum;

        int total = a * b;

        cout << "Case " << i << ": " << total << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        long long n, m;
        cin >> n >> m;

        long long a = n / (2 * m);

        long long sum = m * (m + 1) / 2;
        long long sum1 = (2 * m) * (2 * m + 1) / 2 - sum;
        long long b = sum1 - sum;

        long long total = a * b;

        cout << "Case " << i << ": " << total << endl;
    }

    return 0;
}
