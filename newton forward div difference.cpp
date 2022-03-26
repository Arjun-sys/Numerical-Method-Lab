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
	printf("enter the value at which the vlaue is needed:");
	scanf("%f",&xp);
	h=x[1]-x[0];
	s=(xp-x[0])/h;
	for(i=0;i<n;i++)
	fd[i]=fx[i];
		for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
		
	fd[j]=(fd[j]-fd[j-1]);
}
}
v=fd[0];
//temp1=1;
for(i=1;i<=n-1;i++)
{
	for(k=1;k<=i;k++)
	{
	
	temp1=temp1*(s-k+1);
	v=v+(fd[i]*(temp1)/fact(i));
	temp1=1;
}
}
printf("value of function=%f",v);
}
