#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,n,c,a,b,i;
    cin>>t;
    while(t--){
        cin>>n;
        c=0;
        for(i=1;i<=n;i++){
            cin>>a>>b;
            if((b-a)>5){
                c++;
            }


        }
        printf("%d\n",c);


    }





}
