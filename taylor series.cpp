#include<stdio.h>
#include<math.h>
float f1(float x,float y)
{
    return x*x+y*y;
}
float f2(float x,float y,float f1)
{
    return 2*x+2*y*f1;
}
float f3(float f1,float y,float f2)
{
    return 2+2*f1*f1+2*y*f2;
}
int main()
{
    float x0,y0,x,h,y1,a,b,c;
    printf("Enter x0,y0,x:");
    scanf("%f %f %f",&x0,&y0,&x);
    h=x-x0;
    a=f1(x0,y0);
    b=(f2(x0,y0,a));
    c=(f3(a,y0,b));
    y1=y0+a*h+b*h*h/2.0+c*h*h*h/6.0;
    printf("y(0):%f\ty'(0):%f\ty''(0):%f\ty'''(0):%f\t\n",y0,a,b,c);
    printf("The required value of y for x=%f is %f",x,y1);
}
