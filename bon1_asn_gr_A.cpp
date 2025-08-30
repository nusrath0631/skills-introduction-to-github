#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string nums[100];

    while (cin >> N && N != 0) {
        for (int i = 0; i < N; i++) cin >> nums[i];

        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                if (nums[i] + nums[j] < nums[j] + nums[i]) {
                    swap(nums[i], nums[j]);
                }
            }
        }

        string result = "";
        for (int i = 0; i < N; i++)
            result += nums[i];

        if (result[0] == '0') result = "0";

        cout << result << "\n";
    }
}
