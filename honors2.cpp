#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a[20],b[20],c[20],i,n;
    float x; 

    cout<<"Enter the degree of equations : ";cin>>n;
    cout<<"Enter all coefficients \n";
    for(i=0;i<=n;i++)
        cin>>a[i];
    cout<<"enter initial guess:";cin>>x;

    while(n>0)
    {
        c[0]=b[0]=a[0];
        for(i=1;i<=n;i++)
            b[i]=a[i]+b[i-1]*x;
        for(i=1;i<n;i++)
            c[i]=b[i]+c[i-1]*x;
        if(abs(c[n-1])==0.0)   // for complex "abs" instead of "fabs"
        {
            cout<<"Divide by Zero : ERROR !! ";
            break;
        }
        x-=b[n]/c[n-1];
        if(abs(b[n]/c[n-1])<0.00001)
        {
            cout<<"\nthe required root at  "<<x<<" is "<<b[n];
            for(i=1;i<n;i++)
                a[i]=b[i];
            n--;
        }
    }
return 0;
}
