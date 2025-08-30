#include <iostream>
#include <vector>
using namespace std;

vector<int> a;

void heapify(int i, int n) {
    int left = 2 * i + 1;
    int right = left + 1;
    int max_child;

    if (left >= n)
        return;

    if (right >= n)
        max_child = left;
    else
        max_child = (a[left] > a[right]) ? left : right;

    if (a[i] < a[max_child]) {
        swap(a[i], a[max_child]);
        heapify(max_child, n);
    }
}

void heapSort(int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(i, n);
    }
    for (int i = n - 1; i > 0; i--) {
        swap(a[0], a[i]);
        heapify(0, i);
    }
}

int main() {
    int n;
    while (cin >> n && n != 0) {
        a.resize(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        heapSort(n);

        for (int i = 0; i < n; ++i) {
            if (i > 0) cout << " ";
            cout << a[i];
        }
        cout << endl;

        a.clear();
    }

    return 0;
}
