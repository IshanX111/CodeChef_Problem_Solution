#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,a,b,sum,sum1,c,res,d;
    cin>>t;
    while(t--){
        sum=0;
        cin>>a>>b;
        sum=a+b;
        sum1=sum;
        res=0;
        while(sum1>0){
            d=sum1%10;
            if(d==0){
                    c=6;
            res=res+c;

            }
            else if(d==1){
                     c=2;
            res=res+c;

            }
            else if(d==2){
                      c=5;
            res=res+c;

            }
            else if(d==3){
                    c=5;
            res=res+c;

            }
            else if(d==4){
                c=4;
            res=res+c;
            }
            else if(d==5){
                    c=5;
            res=res+c;

            }
            else if(d==6){
                    c=6;
            res=res+c;

            }
            else if(d==7){
                    c=3;
            res=res+c;

            }
            else if(d==8){
                    c=7;
            res=res+c;

            }
            else if(d==9){
                    c=6;
            res=res+c;

            }
            sum1=sum1/10;

        }
        printf("%d\n",res);

    }




}

