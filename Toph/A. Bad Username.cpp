//A. Bad Username
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    string s;
    cin>>n>>s;
    sort(s.begin(),s.end());
    cout<<s<<endl;
    for(int i=0; i<n; i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
        else{
           ;
        }

    }

    if((n/2)<=count+1)
    {
        cout<<"NO"<<count;
    }
    else
    {
        cout<<"YES"<<count;
    }




    return 0;
}


