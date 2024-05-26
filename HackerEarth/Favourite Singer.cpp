//Favourite Singer

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
    int n;
    cin >> n;

    unordered_map<int, int> singerCount;
    int maxCount = 0;

    for (int i = 0; i < n; ++i) {
        int singer;
        cin >> singer;
        singerCount[singer]++;
        if (singerCount[singer] > maxCount) {
            maxCount = singerCount[singer];
        }
    }

    int favouriteSingerCount = 0;
    for (const auto& pair : singerCount) {
        if (pair.second == maxCount) {
            ++favouriteSingerCount;
        }
    }

    cout << favouriteSingerCount << endl;


    return 0;
}
