//Missing Number

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main()
{
    optimize();

    long long  n,sum=0;
    cin>>n;
    vector<long long> v(n);
    for(int i = 0 ; i < n-1; i++ )
    {
        cin>>v[i];
        sum+=v[i];
    }
        sort(v.begin(),v.end());

    long long total=(n)*(n+1)/2;

    cout<<total-sum<<endl;

    return 0;

}

