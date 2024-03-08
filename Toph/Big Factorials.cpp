//Big Factorials
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a;
for(int i=n-1;i>0;i++){
    n=i*n;
}
cout<<n;



return 0;
}
