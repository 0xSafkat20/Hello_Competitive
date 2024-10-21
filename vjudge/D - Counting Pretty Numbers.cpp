//D - Counting Pretty Numbers
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
        ll l,r,count=0;
        cin>>l>>r;
            for(ll i=l; i<=r; i++)
            {
                ll z = i%10;
                if(z==2 || z==3 || z==9)
                {
                    count++;
                }
            }



        cout<<count<<endl;

    }
    return 0;
}
