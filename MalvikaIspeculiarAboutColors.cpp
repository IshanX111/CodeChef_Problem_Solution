#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,i,c1,c2;
    string s;
    cin>>t;
    while(t--){
            cin>>s;
            c1=0;
            c2=0;
            for(i=0;i<s.length();i++){
                    if(s[i]=='a'){
                        c1++;
                    }
                    else if(s[i]=='b'){
                        c2++;
                    }

            }
            if(c1==s.length()){
                printf("0\n");
            }

            else if(c2==s.length()){
                printf("0\n");
            }
            else if(c1>=c2){
                printf("%d\n",c2);
            }
            else if(c2>c1){
                printf("%d\n",c1);
            }

    }





}
