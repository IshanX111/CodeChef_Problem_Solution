#include<bits/stdc++.h>
using namespace std;
int main(){

    double t,q,p;
    cin>>t;
    while(t--){

        cin>>q>>p;
        if(q>1000){

            printf("%.6lf\n",q*p*.90);
        }
        else
            printf("%.6lf\n",q*p);


    }



}
