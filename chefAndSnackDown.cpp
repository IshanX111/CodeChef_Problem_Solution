#include<bits/stdc++.h>
using namespace std;
int main()
{


    int t,x,i;
    cin>>t;
    int a[5]= {2010,2015,2016,2017,2019};
    while(t--)
    {
        cin>>x;
        int flag=0;
        for(i=0; i<5; i++)
        {
            if(x==a[i])
            {
                printf("HOSTED\n");
                flag=1;
            }
        }
        if(flag!=1)
        printf("NOT HOSTED\n");

    }



}
