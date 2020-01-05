#include<bits/stdc++.h>
using namespace std;
int main(){


int t,n;
cin>>t;
while (t--){

   int c=0,i;
   cin>>n;
   for(i=2;i<n;i++){
    if(n%i==0){
        c++;
        break;
    }

   }
   if(c!=0){
        printf("no\n");
    }
    else
        printf("yes\n");

}



}
