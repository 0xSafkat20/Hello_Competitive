//Decent Arrays
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



    ll n,tem=0;
    cin>>n;
    vector<ll> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
tem = *unique(v.begin(),v.end());

    cout<<tem<<endl;
/*
    for(int i=0; i<n; i++)
    {
        if(arr[i]+1==arr[i+1])
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        //  cout<<(arr[i]== arr[i+1]-1) ? "Yes" : "No";
    }
*/
    return 0;
}
