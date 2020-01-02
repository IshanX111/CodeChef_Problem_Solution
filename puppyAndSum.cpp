#include<bits/stdc++.h>
using namespace std;
int sum1(int D,int N);
int sum2(int N);

int main(){

   int i,a,x,b,D,N,t;
   cin>>t;
   for(i=1;i<=t;i++){
        cin>>D>>N;
        x=sum1(D,N);
        printf("%d\n",x);
   }
}
int sum1(int D,int N){
    int j;
    int sum3=0;
    for(j=1;j<=D;j++){
        sum3=sum2(N);
        N=sum3;
    }
    return sum3;

}
int sum2(int N){
    int k;
    int sum4=0;
    for(k=1;k<=N;k++){
        sum4=sum4+k;
    }

    return sum4;


}





