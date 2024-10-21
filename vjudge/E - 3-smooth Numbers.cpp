//E - 3-smooth Numbers
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
    ll n,count=0;
    cin>>n;

        while(n%3==0){
            n/=3;
        }
        while(n%2==0){
            n/=2;
        }
    if(n==1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
