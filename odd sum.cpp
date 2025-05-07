#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int n = 1; n <= T; n++)
    {
        int a, b;
        cin >> a >> b;
        int sum = 0;
        for (int num = a; num <= b; num++)
        {
            if (num % 2 != 0)
                sum += num;
        }
        cout << "Case " << n << ": " << sum << endl;
    }
    return 0;
}
