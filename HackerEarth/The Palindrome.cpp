//The Palindrome
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
    int t=1;
    cin>>t;
    while(t--)
    {
        string s,a;
        cin>>s;
        a=s;
        reverse(a.begin(),a.end());
        if(s==a)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
        return 0;
    }
