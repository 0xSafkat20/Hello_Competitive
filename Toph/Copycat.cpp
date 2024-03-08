//Copycat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.length();
for(int i=0;i<l;i++){
    if((l-i)%3==0 && i!= 0){
        cout<<",";
    }
    cout<<s[i];

}
    return 0;
}
