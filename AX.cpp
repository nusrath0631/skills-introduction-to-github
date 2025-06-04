#include <iostream>
#include <vector>
using namespace std;


long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    long long N;
    int M;

    while (cin >> N >> M) {
        vector<int> divisors(M);
        for (int i = 0; i < M; ++i) {
            cin >> divisors[i];
        }

        long long excluded = 0;

        int totalSubsets = 1 << M;
        for (int subset = 1; subset < totalSubsets; ++subset) {
            long long currentLCM = 1;
            int countBits = 0;

            for (int i = 0; i < M; ++i) {
                if (subset & (1 << i)) {
                    currentLCM = lcm(currentLCM, divisors[i]);
                    countBits++;
                    if (currentLCM > N) break;
                }
            }

            if (currentLCM > N) continue;

            long long divisible = N / currentLCM;
            if (countBits % 2 == 1) {
                excluded += divisible;
            } else {
                excluded -= divisible;
            }
        }

        cout << (N - excluded) << endl;
    }

    return 0;
}

