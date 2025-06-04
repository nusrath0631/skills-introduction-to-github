#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    while (cin >> N >> M && (N || M)) {
        int* j1 = new int[N];
        int* j2 = new int[M];

        for (int i = 0; i < N; ++i)
            cin >> j1[i];
        for (int i = 0; i < M; ++i)
            cin >> j2[i];

        int i = 0, j = 0, count = 0;

        while (i < N && j < M) {
            if (j1[i] == j2[j]) {
                ++count;
                i++;
                j++;
            } else if (j1[i] < j2[j]) {
                i++;
            } else {
                j++;
            }
        }

        cout << count << endl;

        delete[] j1;
        delete[] j2;
    }
    return 0;
}

