#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

        for(int i=0; i<t; t++)
        //while(t--)
        {
            int a,b;
            cin>>a>>b;

        if ((a + b) % 3 == 0 && min(a, b) * 2 >= max(a, b))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

