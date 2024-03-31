//Weird Algorithm

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main()
{
    optimize();

    long long int x;
    cin>>x;
    cout<<x<<" ";
    while(x!=1)
    {

        if(x%2!=0)
        {
            x=x*3+1;
        }
        else
        {
            x=x/2;
        }
        cout<<x<<" ";
    }

    return 0;
}
