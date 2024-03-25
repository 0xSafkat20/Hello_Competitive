//Big Factorials
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll t;
    cin >> t;
    ll fact = 1;
    if(t < 20)
    {
        for(int i = 1; i<=t; i++)
        {
            fact=fact*i;
        }

        cout << fact%10000 << endl;
    }


    return 0;
}
