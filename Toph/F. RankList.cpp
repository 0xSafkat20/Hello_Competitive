//F. RankList
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s[n],solve[n],penalty[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i]>>solve[i]>>penalty[i];

    }
    sort(solve,solve+n);
    reverse(solve,solve+n);

    for(int i=0; i<n; i++)
    {
        cout<<s[i]<<" "<<solve[i]<<" "<<penalty[i]<<endl;
    }
    return 0;
}
