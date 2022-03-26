#include<iostream>
#include<math.h>
using namespace std;
#define f(x) x*x-6*x+8
#define g(x) (x*x+8)/6
int main()
{
	float x0,x1,e=1;
	cout<<"input the initial guess";
	cin>>x0;
	while(e>0.005)
	{
		x1=g(x0);
		e=fabs((x1-x0)/x1);
		x0=x1;
	}
	cout<<"\nthe root of the equation is"<<x0;
	return 0;
}
