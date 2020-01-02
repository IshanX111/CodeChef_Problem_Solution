#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,sum1=0,sum2=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
            if(a[i]%2==0){
                sum1++;
            }
            else
                sum2++;

    }
    if(sum1>sum2){
        printf("READY FOR BATTLE\n");
    }
    else
        printf("NOT READY\n");


}
