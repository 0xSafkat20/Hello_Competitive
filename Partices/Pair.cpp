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
    pair < int, string > student;
    vector < pair < int, string > > allstudent;
    int n;
    cin>>n;
    int roll;
    string name;

    for(int i=0; i<n; i++)
    {
        cin>>roll>>name;
        student = make_pair(roll,name);
        allstudent.push_back(student);
    }

    sort(allstudent.begin(),allstudent.end());

    for(auto infoStudent: allstudent)
    {
        cout<<"Name: "<<infoStudent.first<<" "<<"Roll: "<<infoStudent.second<<endl;
    }



}



int main()
{

    solve();
    return 0;
}

