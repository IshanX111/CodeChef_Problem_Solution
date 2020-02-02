#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,x,amount,check,i;
    cin>>t;
    while(t--){

        cin>>n;
        int a[n];
        char b[n];
        cin>>x;
        amount=x;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
         for(i=0;i<n;i++){
            check=amount-a[i];
            if(check<0){
                b[i]='0';
            }
            else if(check>=0){
                amount=amount-a[i];
                b[i]='1';
            }
        }
        for(i=0;i<n;i++){
            printf("%c",b[i]);
        }
        printf("\n");



    }


}
