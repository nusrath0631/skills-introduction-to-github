#include <iostream>
#include <string>
using namespace std;
int main()
{
    string b; // b - binary
    cin>>b;
    string res = " ";
    bool removed = false ;
    for(int i=0; i< b.length(); i++){
        if(!removed && b[i] == '0')
        {
            removed = true ;

            continue;
        }
        res += b[i];
    }
    if(!removed)
    {
        res = b.substr(1);
    }
    cout<<res<<endl;

    return 0;

}
