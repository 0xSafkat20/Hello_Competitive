//F. LCM
#include<bits/stdc++.h>
using namespace std;
int main()
{

int n,m;
cin>>n>>m;
if(n%2==0 && m%2==0 && m>=2 && n>=2){
    cout<<"yes";
}
else{
    if(n%3==0 && m%3==0 && m>=2 && n>=2){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}


return 0;

}
