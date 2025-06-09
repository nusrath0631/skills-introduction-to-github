#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> num;
    unordered_map<int, int> frq;

    int n;
    while (cin >> n){
        frq[n]++;
        if(frq[n] == 1){
            num.push_back(n);
        }
    }

    for(int i = 0; i < num.size(); ++i){
        cout << num[i] << " " << frq[num[i]] << endl;
    }

    return 0;
}
//3 1 2 2 1 3 5 3 3 2

