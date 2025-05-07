#include <bits/stdc++.h>
using namespace std;
int main(){

    float n, total = 0, x, avg;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        total += x;
    }
    avg = total / n;
    int bd = (int)avg;
    float ad = abs(avg - bd);

    int u, d;
    if (abs(ad - 0.333) < 0.01) {
        u = 1;
        d = 3;
    } else {
        u = (int)(ad * 10 + 0.001);
        d = 10;
        int g = __gcd(u, d);
        u /= g; d /= g;
    }

    if(u == 0){
        if(avg < 0) cout << "- ";
        cout << abs(bd) << endl;
    }
    else if(abs(avg) < 1){
        cout << " " << u << endl;
        cout << "-" << endl;
        cout << " " << d << endl;
    }
    else if(avg > 0){
        cout << " " << u << endl;
        cout << bd << "-" << endl;
        cout << " " << d << endl;
    }
    else{
        cout << "    " << u << endl;
        cout << "- " << abs(bd) << "-" << endl;
        cout << "    " << d << endl;
    }

    return 0;
}
