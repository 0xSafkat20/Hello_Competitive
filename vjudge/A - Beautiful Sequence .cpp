//A - Beautiful Sequence
//"Bismillah Rahman Rahim"
//{
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
using ll = long long;

#define forn(i,n)  for(int i=0;i<n;i++)
#define all(v)     v.begin(), v.end()
#define rall(v)    v.rbegin(),v.rend()
#define YES        cout << "YES\n"
#define NO         cout << "NO\n"
#define pb         push_back
#define sz(a)      (int)a.size()
//}
int main()
{
    optimize();
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int count=0;
        vector<int> v(n+1);
        for(int i=1; i<=n; i++)
        {
            cin>>v[i];
        }

        for(int i=1; i<=n; i++)
        {
            if(v[i]<=i)
            {
                count++;
            }
        }

    if(count>0)
    {
        cout<<"Yes"<<'\n';
    }
    else
    {
        cout<<"No"<<'\n';

    }
    }
    return 0;
}
