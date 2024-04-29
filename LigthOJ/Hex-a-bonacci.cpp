//Knights on a Chessboard
//"Bismillah Rahman Rahim"
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
using ll = long long;

#define forn(i,t)  for(int i=0;i<t;i++)
#define all(v)     v.begin(), v.end()
#define rall(v)    v.rbegin(),v.rend()

#define pb    push_back
#define sz(a) (int)a.size()

int func(int n)
{
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;
    return (n-1)+(n-2)+(n-3)+(n-4)+(n-5)+(n-6);
}



int main()
{
    optimize();
    ll t;
    cin>>t;
    forn(i,t)
    {
        int a,b,c,d,e,f,n;
        cin>>a>>b>>c>>d>>e>>f>>n;
        func(n);
        cout<<"Case "<<i<<": "<<func(n) %10000007;
    }









    return 0;
}
