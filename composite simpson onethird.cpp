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
    float x0,xn,h,sum,sum1,sum2,ans,k;
    printf("\n Enter values of x0,xn,and k\n");
    scanf("%f%f%f",&x0,&xn,&k);
    h=(xn-x0)/k;
   sum=(f(x0)+f(xn));
    for(i=1;i<=k-1;i=i+2)
 sum+=4*(f(x0+i*h));
    for(i=2;i<=k-2;i=i+2)
    sum+=2*(f(x0+i*h));
   ans=h/3*(sum);
    printf("\nthe required value of intergration is %f",ans);
    getch();
}
