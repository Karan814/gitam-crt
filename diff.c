//write a program to accept only 2 digit no same digit then 0 else difference of those numbers
#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",a/10-a%10);
	return 0;
}
