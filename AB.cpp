#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int t=0; t<T; t++)
    {
        if(t>0)cout<<endl;
            vector<int> perm;
            for(int i=0; i<T; i++)
            {
             int index;
             cin>>index;
             perm.push_back(index);

            }
            vector<float> nums;
        for (int i = 0; i < T; i++ ) {
            float num;
            cin >> num;
            nums.push_back(num);

        }


        for (int i = 0; i < perm.size(); i++) {
            cout << nums[perm[i] - 1] << endl;
        }


    }
    return 0;
}
