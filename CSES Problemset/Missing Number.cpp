//Missing Number

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main()
{
    optimize();

    long long int n;
    cin>>n;
    n=n-1;
     int arr[n];
    for(int i = 0 ; i < n ; i++ ){
        cin>>arr[i];
    }
    sort(arr,arr+n);

    for(int i = 0 ; i < n ; i++ ){
        if(arr[i]!=i+1){
            cout<<i+1<<endl;
            break;
        }
    }



    return 0;

}

