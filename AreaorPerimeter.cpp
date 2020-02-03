#include<bits/stdc++.h>
using namespace std;
int main(){

    int l,b,area,peri;
    cin>>l>>b;
    area=l*b;
    peri=2*(l+b);
    if(area>peri){
        printf("Area\n");
        printf("%d\n",area);
    }
    else if(area<peri){
        printf("Peri\n");
        printf("%d\n",peri);
    }
    else if(area==peri){
        printf("Eq\n");
        printf("%d\n",peri);
    }




}
