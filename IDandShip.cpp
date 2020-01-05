#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
char c;
cin>>t;
while(t--){
    cin>>c;
    if(c=='B'|| c=='b')
        printf("BattleShip\n");
    else if(c=='C'||c=='c')
        printf("Cruiser\n");
    else if(c=='D'||c=='d')
        printf("Destroyer\n");
    else if(c=='F'||c=='f')
        printf("Frigate\n");
}


}
