#include<stdio.h>
#include<conio.h>
float f(float x)
{
    return(2*x*x-1);
}
int main()
{
	int i;
    float x0,xn,h,sum,ans,k;
    printf("\n Enter values of x0,xn,and k\n");
    scanf("%f%f%f",&x0,&xn,&k);
    h=(xn-x0)/k;
   sum=(f(x0)+f(xn));
    for(i=1;i<=k-1;i++)
    sum=sum+2*(f(x0+i*h));
   ans=h/2*(sum);
    printf("\nthe required value of intergration is %f",ans);
    getch();
}
