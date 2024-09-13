//acpc_long_contest
//"Bismillah Rahman Rahim"
//{
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
using ll = long long;

#define forn(i,n)  for(int i=0;i<n;++i)
#define all(v)     v.begin(), v.end()
#define rall(v)    v.rbegin(),v.rend()

#define pb    push_back
#define sz(a) (int)a.size()
//}
int main()
{
    optimize();
    ll t ;
    while (cin >> t && t != 0) {
    ll n;
    cin>>n;
    vector<ll> v(n);
    forn(i,n)
    {
        cin>>v[i];
    }

    sort(v.begin(), v.end());

    forn(i,n){
    if (i > 0) cout << " ";
        cout<<v[i];
    }
    cout<<endl;


    }
    return 0;
}
