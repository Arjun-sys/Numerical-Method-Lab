#include<conio.h>
#include<stdio.h>
#define f(x,y) 2*y/x
int main()
{
float x,y,h,xn,l;
printf("Program for Solution of Ordinary Differential Equation\nHeun's Method\n");
printf("Enter value for x and y\n");
scanf("%f%f",&x,&y);
printf("Enter value for h and last of x\n");
scanf("%f%f",&h,&xn);
while(x+h<=xn)
{
x=x+h;	
l=(h/2)*(f(x,y)+f(x+h,y+h*f(x,y)));
y=y+l;

printf("y = %.2f\tx = %.2f\n",y,x);
}
 getch();
}
