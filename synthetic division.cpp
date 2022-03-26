#include<conio.h>
#include<iostream>
using namespace std;
int main(){
             int poly[20], n, r, i, q[20];
                cout<<"\n Enter the degree of the equation : ";
                cin>>n;
                for(i=0;i<=n;i++){
                                cout<<"\n Coefficient x[ "<< n-i<<"]=";
                                cin>>poly[i];
                }

                cout<<"\n Enter the value of constant in (x-r) : ";
                cin>>r;
                
                q[0] = poly[0];
                for(i=1;i<=n;i++){
                                q[i] = (q[i-1]*r)+poly[i];
                }

                cout<<"\n Coefficients of quotient are: \n";
                for(i=0;i<n;i++){
                                cout<<q[i]<<"\t";
                }
                cout<<"\n Remainder is: "<<q[n];
return 0;

}
