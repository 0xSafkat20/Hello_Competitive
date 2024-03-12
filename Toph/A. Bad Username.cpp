//A. Bad Username
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=1;
    string s;
    cin>>n>>s;
    sort(s.begin(),s.end());
    for(int i=1; i<n; i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
    }

    if((n/2)<count &&  )
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    return 0;
}


