#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    sort(a,a+n);
     for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);

    }



}

