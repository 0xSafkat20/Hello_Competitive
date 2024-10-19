//vjudge.context
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

    vector<int> v(8);

    for(int i=0; i<8; i++)
    {
        cin>>v[i];
    }

    for(int i=0; i<8; i++)
    {
        if(v[i]<=100 || v[i]>=675)
        {
            if(v[i] < v[i+1])
            {
                if(v[i]/25==0)
                {
                cout<<"Yes"<<endl;
                }
            }
        }
        else{
            cout<<"No"<<endl;
        }
    }










    return 0;
}
