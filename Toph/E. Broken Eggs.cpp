//E. Broken Eggs
#include<bits/stdc++.h>
using namespace std;
int main()
{
int r,n,m;
cin>>n>>m;
r=n-m;
if(r%2!=0 || n<2 || n==m){
    cout<<"no";
}
else{
    cout<<"yes";
}

return 0;
}
