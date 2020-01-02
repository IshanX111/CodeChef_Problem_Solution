#include<bits/stdc++.h>
using namespace std;
int main(){

int d,j,i,t,a,sum=0;
cin>>t;
for(i=1;i<=t;i++){
    cin>>a;
    sum=0;
    while(a>0){
      d=a%10;
      sum=sum+d;
      a=a/10;
    }
    printf("%d\n",sum);


}



}
