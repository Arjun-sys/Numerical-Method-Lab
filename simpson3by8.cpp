#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
    return(sqrt(1-x*x));
}
int main()
{
	int i;
    float x0,xn,h,sum,k;
    printf("\n Enter values of x0 ,xn and k         \n");
    scanf("%f%f%f",&x0,&xn,&k);
    h=(xn-x0)/k;
   sum=(f(x0)+f(xn));
    for(i=1;i<=k-1;i++)
    sum+=3*(f(x0+i*h));
    printf("\nthe required value of intergration is %f",3*h*(sum)/8);
    getch();
}
