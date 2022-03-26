#include<stdio.h>
#include<math.h>
#include<conio.h>

float f(float x)
{
    return(sqrt(1-x*x));
}
int main()
{
	int i,k;
    float x0,xn,h,sum;
    printf("\n Enter values of x0 ,xn and k\n");
    scanf("%f%f%f",&x0,&xn,&k);
    h=(xn-x0)/k;
   sum=(f(x0)+f(xn));
    for(i=1;i<=k-1;i++)
    {
    if(i%k!=0)
    sum+=3*(f(x0+i*h));
    else
	sum+=2*(f(x0+i*h)); } 
printf("\nthe required value of intergration is %f",3*h*(sum)/8);
return 0;
}
