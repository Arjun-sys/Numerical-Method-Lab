#include <stdio.h>
#include <stdlib.h>
float f(float x, float y)
{
  return(2*x+y);
}


int main()
{
  int k;
  float h,x,y;
  printf("enter x,y,and h:");
  scanf("%f%f%f",&x,&y,&h);

  for (k = 1; k <= 4; k++)
  {
    y += h * f(x,y);
    x += h;
    printf("k = %d t = %f x = %f\n", k, x, y);
  }
}
