#include<bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    while(getline(cin,line))
    {
        list<char> t;
        auto itr = t.begin();
        for(int i=0; i<line.length(); i++)
        {
            char ch = line[i];
            if(ch == '['){
                itr = t.begin();
            }
            else if(ch == ']'){
                itr = t.end();
            }
            else{
                itr = t.insert(itr,ch);
                itr++;
            }

        }
        for(char ch:t)
        {
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;

}
