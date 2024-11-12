//G - Longest Palindrome
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

    ll count = 0;
    string s,rs;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        for(int j = 2 ; j<s.length()-i; j++)
        {
            rs = s.substr(i,j);


        }
    }

    cout<<rs<<endl;





    return 0;
}
