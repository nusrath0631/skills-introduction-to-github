#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int t=0; t<=T; t++){
        string temp;
        int n;
        cin >> temp >> n;

        int M[100][100];
        bool sym = true;

        for(int i=0; i<n; i++)
        for(int j=0; j<n; j++){
            cin>>M[i][j];
            if(M[i][j]<0)
                sym = false;
        }
        for (int i = 0; i < n && sym; i++)
            for (int j = 0; j < n; j++)
                if (M[i][j] != M[n - 1 - i][n - 1 - j])
                    sym = false;
                    cout << "Test #" << t << ": " << (sym ? "Symmetric." : "Non-symmetric.") << endl;

    }
    return 0;
}
