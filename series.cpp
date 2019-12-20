#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter value of n");
	scanf("%d",&n);
	printf("%d",i);
	while(i<n)
	{
		i=i+3;
		printf("%d",i);
		i=i-2;
		printf("%d",i);
	}
}
