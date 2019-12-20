#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	printf("enter options 1.add 2.subtract 3.multiply 4.divide");
	scanf("%d",&c);
	switch(c) 
	{
		case 1:printf("%d",a+b);
		break;
		case 2:printf("%d",a-b);
		break;
		case 3:printf("%d",a*b);
		break;
		case 4:printf("%d",a/b);
		break;
		default:printf("enter valid input");
	}
	return 0;
}
