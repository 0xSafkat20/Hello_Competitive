//
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

#define pb    push_back
#define sz(a) (int)a.size()
//}
int main()
{
    optimize();
    ll t=1;
    cin>>t;
    while(t--)
    {

        ll x,n;
        cin>>x>>n;

        if(x>n/100)
        {
            cout<<"0"<<endl;
        }
        else
        {
            if(n%100!=0)
            {
                cout<<abs((n/100)-x)+1<<endl;
            }
            else
            {
                cout<<abs(x-(n/100))<<endl;
            }
        }
    }
    return 0;
}
