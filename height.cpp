#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a<150)
	{
		printf("dwarf");
	}
	else if(a>150&&a<165)
	{
		printf("average height");
	}
	else if(a>165&&a<190)
	{
		printf("tall");
	}
	if (a>190)
	{
	
	printf("abnormal height");
	}
	else
	printf("invalid input");
	return 0;
}
