#include<bits/stdc++.h>
using namespace std;

int val(int sum)
{
    int d,res1=0;

    while(sum>0)
    {
        d=sum%10;
        res1=res1+d;
        sum=sum/10;
    }

    return res1;
}
int main()
{

    int t,n,sum,res,i,j,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];

        }
        int m=val(a[0]*a[1]);
        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                sum=a[i]*a[j];
                x=val(sum);
                if(x>=m)
                {
                    m=x;
                }
            }
        }
        printf("%d\n",m);
    }

}
