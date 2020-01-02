#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,c;
    cin>>t;
    while(t--){

        cin>>a>>b>>c;
        if((b>a && b<c)||(b<a && b>c)){
            printf("%d\n",b);}
        else if((a>b && a<c)||(a<b && a>c)){
            printf("%d\n",a);
        }
        else if((c<a && c>b)||(c>a&&c<b)){
            printf("%d\n",c);
        }

    }


}
