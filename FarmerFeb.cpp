#include<bits/stdc++.h>
using namespace std;
int check_prime(int sum);

int check_prime(int sum){
    int i,c=0;
    for(i=2;i<sum;i++){
        if(sum%i==0){
            c=1;
            break;
        }
    }
    if(c==0){
        return 2;
    }
    else
        return 3;

}
int main(){

    int t,x,y,j,i,sum,sum1,test;
    cin>>t;
    while(t--){
            cin>>x>>y;
            sum=x+y;
            for(i=1;;i++){
                sum1=sum+i;
                test=check_prime(sum1);
                if(test==2){
                    printf("%d\n",i);
                    break;
                }

            }



    }





}
