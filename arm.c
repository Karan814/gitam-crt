#include<stdio.h>
#include<math.h>
int main(void)
{
	int a,b,n,t,r,c=0;
	scanf("%d",&a);
	n=a;t=a;
	while(a!=0)
	{
		a=a/10;
		c=c+1;
	}
	while(t>0)
	{
		r=t%10;
		t=t/10;
		b=b+pow(r,c);
	}
	if(n==b)
	{
		printf("%d armstrong",n);	
	}
	else
	{
		printf("%d not armstrong",n);
	}
	
	return 0;
}
