#include<stdio.h>
#include<conio.h>
float f(float x)
{
    return(3*x+1);
}
int main()
{
    float x0,xn,h,ans;
    printf("\n Enter values of x0 and xn\n");
    scanf("%f%f",&x0,&xn);
    h=(xn-x0)/2;
    ans=h/3*(f(x0)+4*f(x0+h)+f(xn));
    printf("\nthe required value of intergration is %f",ans);
    getch();
}
