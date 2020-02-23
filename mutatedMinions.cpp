#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,c,n,key,i;
    cin>>t;
    while(t--){
        c=0;
        cin>>n>>key;
        int a[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }

        for(i=0;i<n;i++){
            a[i]=a[i]+key;
        }

        for(i=0;i<n;i++){
            if(a[i]%7==0){
                c++;
            }
        }
        printf("%d\n",c);
    }




}
