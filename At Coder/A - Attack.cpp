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
    ll a,b,count=0;
    cin>>a>>b;
    if(a%b==0){
              cout<<(a/b)<<endl;
    }
    else{
         cout<<(a/b)+1<<endl;
    }
    return 0;
}
