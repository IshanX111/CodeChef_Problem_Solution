#include<bits/stdc++.h>
using namespace std;
int main(){

   int l,t,i,a;
   cin>>t;
   for(i=1;i<=t;i++){

        cin>>a;
        l=a%10;
        while(a>=10){
            a=a/10;
        }
        printf("%d\n",a+l);

   }


}
