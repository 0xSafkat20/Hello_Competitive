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
    ll t;
    cin>>t;
    while(t--)
    {

        ll r;
        cin>>r;
        if(r<=1399)
        {
            cout<<"Division 4"<<endl;
        }
        else if(r>=1400 && r<=1599)
        {
            cout<<"Division 3"<<endl;
        }
        else if(r>=1600 && r<=1899)
        {
            cout<<"Division 2"<<endl;
        }
        else
        {
            cout<<"Division 1"<<endl;
        }
    }
    return 0;
}
