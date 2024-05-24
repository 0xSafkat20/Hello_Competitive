//Knights on a Chessboard
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

int max_knights(int m, int n) {
    if (m == 1 || n == 1) {
        // If there's only one row or one column, all cells can hold a knight
        return m * n;
    } else if (m == 2 || n == 2) {
        // Special case for 2xN or Mx2 boards
        if (m == 2) {
            swap(m, n); // Ensure m >= n
        }
        if (n % 4 == 0) {
            return (n / 4) * 4;
        } else if (n % 4 == 1) {
            return (n / 4) * 4 + 2;
        } else {
            return (n / 4) * 4 + 4;
        }
    } else {
        // General case for larger boards
        return (m * n + 1) / 2;
    }
}

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t) {
        int m, n;
        cin >> m >> n;
        int max_knight_count = max_knights(m, n);
        cout << "Case " << t << ": " << max_knight_count << endl;
    }
    return 0;
}
