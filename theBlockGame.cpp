#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,rev=0,d;

    cin>>t;
    while(t--){
        cin>>a;
        rev=0;
        b=a;
        while(a>0){
        d=a%10;
        rev=(rev*10)+d;
        a=a/10;
        }
        if(rev==b)
            printf("wins\n");
        else
            printf("losses\n");


    }


}
