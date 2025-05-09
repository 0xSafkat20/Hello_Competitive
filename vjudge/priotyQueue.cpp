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
#define YES        cout << "YES\n"
#define NO         cout << "NO\n"
#define pb         push_back
#define sz(a)      (int)a.size()
//}




void solve()
{
    priority_queue < int > pq;
    int m,n;
    cin >> m>>n;
    while (m--)
    {
        int x;
        cin>>x;
        pq.push(x);
    }
    long long to_in = 0;
    while(m--)
    {
        int seat = pq.top();
        to_in += seat;
        pq.pop();
        seat--;
        pq.push(seat);

    }

    cout<<to_in<<endl;



}


    int main()
    {

        solve();
        return 0;
    }

