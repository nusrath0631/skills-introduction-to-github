#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N];

    // Read the numbers
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int Q;
    cin >> Q;

    // Handle each query
    for (int q = 0; q < Q; q++) {
        int i, j;
        cin >> i >> j;

        int sum = 0;
        for (int k = i; k <= j; k++) {
            sum += arr[k];
        }

        cout << sum << endl;
    }

    return 0;
}

