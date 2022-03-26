#include<stdio.h>
#include<conio.h>
float f(float x)
{
    return(x*x*x+2);
}
int main()
{
    float x0,xn,h,ans;
    printf("\n Enter values of x0 and xn\n");
    scanf("%f%f",&x0,&xn);
    h=(xn-x0);
    ans=h/2*(f(x0)+f(xn));
    printf("\nthe required value of intergration is %f",ans);
    getch();
}
