#include<bits/stdc++.h>
using namespace std;
int main()
{
        float t,basicSalary,grossSalary,hra,da;
        cin>>t;
        while(t--){
                cin>>basicSalary;
                if(basicSalary<1500){
                    hra=.10*basicSalary;
                    da=.90*basicSalary;
                    grossSalary=basicSalary+hra+da;
                    printf("%.2f\n",grossSalary);
                }
                else if(basicSalary>=1500){
                    hra=500;
                    da=.98*basicSalary;
                    grossSalary=basicSalary+hra+da;
                    printf("%.2f\n",grossSalary);
                }

        }


}
