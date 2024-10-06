//Increasing Array
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

const int mx = 2e5+123;
ll arr[mx];

int main()
{
    optimize();
    ll n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    ll count=0;

    for(int i=1; i<n; i++)
    {
        if(arr[i] < arr[i-1])
        {
            count+= arr[i-1]-arr[i];
            arr[i] = arr[i-1];

        }
    }

    cout<<count<<'\n';

        return 0;
}
