#include<iostream>
#include<conio.h>
using namespace std;
float f (float x)
{
	return (x*x);
}
int main()
{
	float x,h,d;
	cout<<"Enter the value of point x and h"<<endl;
	cin>>x>>h;
	d=(f(x+h)-f(x-h))/(2*h);
	cout<<" The derivative of equation f(x)=x^2 at x= "<<x<<" with step size h= "<<h<<" is "<<d;
	}
