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
	float x[10],fx[10],fd[10],v=0,xp,h,s,temp1,temp2,prev;
	printf("enter the number of points");
	scanf("%d",&n);
	printf("enter the value of x and f(x)");
	for(i=0;i<n;i++)
	scanf("%f%f",&x[i],&fx[i]);
	printf("enter the value at which the derivative is needed:");
	scanf("%f",&xp);
	h=x[1]-x[0];
	s=(xp-x[0])/h;
	for(i=0;i<n;i++)
	fd[i]=fx[i];
	{
		for(j=n-1;j>i;j--)
	fd[j]=(fd[j]-fd[j-1]);
	
}
v=fd[1];
prev=1;
for(i=2;i<n;i++)
{
	temp1=1;
	for(k=2;k<=i;k++)
	temp1=temp1*(s-k+2);
	temp2=(s-i+1)*prev;
	prev=(temp1+temp2);
	v=v+(fd[i]*(temp1+temp2))/fact(i);
	
}
v=v/h;

printf("value of first derivative=%f",v);
}
