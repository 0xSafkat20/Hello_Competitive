//Big Factorials
//"Bismillah Rahman Rahim"
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

int main()
{
    optimize();
    ll n,temp = 1;
    cin>>n;
    if(n==0){
        cout<<"0000"<<endl;
    }
    else{
       for(int i=1; i<=n; i++)
    {
        temp*=i;
    }
    cout<<temp%10000<<endl;
    }



    return 0;
}
