#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,t,a,b,c,sum=0;
    cin>>t;
    for(i=1;i<=t;i++){
        sum=0;
        cin>>a>>b>>c;
        sum=a+b+c;
        if(sum==180){
            printf("YES\n");
        }
        else
            printf("NO\n");

    }



}
