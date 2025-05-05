//Stack
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
    int n,q;
    cin>>n>>q;
    stack<int> s[n];

    for(int i=0; i<q; i++)
    {
        int tp;
        cin>> tp;
        if(tp==0)
        {
            int t,x;
            cin>>t>>x;
            s[t].push(x);
        }
        else if(tp==1)
        {
            int t;
            cin>>t;
            if(s[t].empty())
            {

            }
            else
            {
                cout<<s[t].top()<<endl;
            }

        }
        else
        {
            int t;
            cin>>t;
            if(s[t].empty()==0) s[t].pop();
        }
    }
}




int main()
{

    solve();
    return 0;
}

