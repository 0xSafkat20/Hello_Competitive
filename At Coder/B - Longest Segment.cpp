//B - Longest Segment
//"Bismillah Rahman Rahim"
//{
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
using ll = long long;
using dd = double;

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
    ll n;
    cin>>n;
    vector<int> v(100);
    vector<int> ve(100);

    for(int i=0; i<n; i++)
    {
        cin>>v[i]>>ve[i];
    }
    dd max_sqrt ;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            dd sqr=(v[i] - v[j]) * (v[i] - v[j]) + (ve[i] - ve[j]) * (ve[i] - ve[j]);
            max_sqrt = max(max_sqrt,sqr);
        }

    }
    max_sqrt=sqrt(max_sqrt);
    cout<<fixed<<setprecision(7)<<max_sqrt<<endl;





    return 0;
}
