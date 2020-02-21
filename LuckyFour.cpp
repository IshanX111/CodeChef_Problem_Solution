#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,d,c,b,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        b=a;
        c=0;
        while(b>0)
        {
            d=b%10;
            if(d==4)
            {
                c++;;
            }
            b=b/10;


        }
        printf("%d\n",c);


    }



}
