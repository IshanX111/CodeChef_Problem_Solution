#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,n,minimum,i;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        minimum=a[1]-a[0];

        for(i=0;i<n;i++){

                   if((a[i+1]-a[i])<=minimum){
                        minimum=a[i+1]-a[i];

            }
        }
        printf("%d\n",minimum);
    }


}
