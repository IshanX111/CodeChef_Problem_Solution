#include<bits/stdc++.h>
using namespace std;
int main(){

 int x;
 float y,res;

 cin>>x>>y;

 if(x%5==0 && x<y-0.50){

    res=y-x;
    printf("%.2f\n",res-0.50);
 }

 else
    //printf("%.2f\n",y);
    cout<<y<<endl;

 return 0;
}
