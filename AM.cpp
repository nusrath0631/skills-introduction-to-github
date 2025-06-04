#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a.begin(), a.end());
    vector<int> result(n);
    int left = (n - 1) / 2;
    int right = left + 1;
    bool toLeft = true;

    for (int i = 0; i < n; ++i) {
        if (toLeft)
            result[left--] = a[i];
        else
            result[right++] = a[i];
        toLeft = !toLeft;
    }

    for (int h : result)
        cout << h << " ";
    cout << endl;

    return 0;
}

