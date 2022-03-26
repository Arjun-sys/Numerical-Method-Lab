#include<stdio.h>
int fact(int n)
{
	if(n==1)
	return 1;
	else
	return n*fact(n-1);
	
}
int main()
{
	int n,i,j,k;
	float x[10],fx[10],bd[10],v=0,xp,h,s,p;
	printf("enter the number of points");
	scanf("%d",&n);
	printf("enter the value of x and f(x)");
	for(i=0;i<n;i++)
	scanf("%f%f",&x[i],&fx[i]);
	printf("enter the point at which value  is needed:");
	scanf("%f",&xp);
	h=x[1]-x[0];
	s=(xp-x[n-1])/h;
	for(i=0;i<n;i++)
	bd[i]=fx[i];
		for(i=n-1;i>=1;i--)
	{
		for(j=0;j<=i-1;j++)
		{
		
	bd[j]=(bd[j+1]-bd[j]);
}
}
v=bd[n-1];

for(i=1;i<=n-1;i++)
{
	for(k=1;k<=i;k++)
	{
	
	p=p*(s+k-1);
	v=v+(bd[n-i]*(p)/fact(i));
	p=1;
}
}
printf("value of function =%f",v);
}
