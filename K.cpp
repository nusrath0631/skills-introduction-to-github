#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    for (int n = 1; n <= T; n++) {
        int A, B;
        cin >> A >> B;
        int count = 0;
        for (int i = A; i <= B; i++) {
            long long sum = 1LL * i * (i + 1) / 2;
            if (sum % 3 == 0)
                count++;
        }
        cout << "Case " << n << ": " << count << endl;
    }
    return 0;
}


