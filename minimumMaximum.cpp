#include<bits/stdc++.h>
using namespace std;
int main(){

    long long t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        long long mi=a[0];

        long long ans=mi*(n-1);
        printf("%lld\n",ans);

    }
}
