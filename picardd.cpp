#include<conio.h>
#include<stdio.h>
float f (float x,float y)
{
	return x*x+y*y;
}
float f1(float y0,float x,float x0)
{
	return y0+(((x*x*x)/3)-x0);
}
float f2(float f1,float x)
{
	return f1+f1*f1*x;
}
int main()
{
	float x0,y0,x,a,b;
	printf("enter the value of x0,y0,x");
	scanf("%f%f%f",&x0,&y0,&x);
	a=f1(y0,x,x0);
	b=f2(a,x);
	printf("y1: %f \t y2:%f ",a,b);
	
}
