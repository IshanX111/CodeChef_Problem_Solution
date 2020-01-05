#include<bits/stdc++.h>
using namespace std;
int main(){
 int t,i,c;
 cin>>t;

 while(t--){

        int arr[30];
        c=0;int flag=0;
        for(i=0;i<30;i++){
            cin>>arr[i];
        }
        for(i=0;i<30;i++){
            if(arr[i]==1){
                c++;}
            else {
                    c=0;
            }
            if(c>5){
                flag=1;
            }
        }
        if(flag=1){
            printf("#coderlifematters\n");
        }
        else
            printf("#allcodersarefun\n");

 }


}
