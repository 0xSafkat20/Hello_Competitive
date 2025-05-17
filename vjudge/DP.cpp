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
#define YES        cout << "YES\n"
#define NO         cout << "NO\n"
#define pb         push_back
#define sz(a)      (int)a.size()
//}




void solve()
{
    int dp[100123];

    int fibo(int n)
    {
        if(n <= 1 ) return n;

        if( n! = -1 ) return dp[n];

        return dp[n] = fibo(n-1) + fibo (n-2);

    }

}


int main()
{

    solve();

    memset(dp,-1 , sizeof(dp));

    int n;
    cin>>n;

    cout<<fibo(n)<<endl;


    return 0;
}

