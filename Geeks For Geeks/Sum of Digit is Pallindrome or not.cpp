//Sum of Digit is Pallindrome or not
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
    string s,t,p;
    cin>>s;
    int c;
    for(int i=0; i<s.size(); i++)
    {
        c+=s[i]-'0';
    }
    p = to_string(c);

    t=p;

    reverse(t.begin(),t.end());

    if(t==p)
    {
        cout<<'1'<<endl;
    }
    else
    {
        cout<<'0'<<endl;
    }



    //cout<<c<<endl;

    return 0;



}
