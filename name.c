#include<stdio.h>
int main()
{
	char name [20];
	char sname[20];
	printf("enter your name");
	scanf("%s",name);
	printf("enter your surname\n");
	scanf("%s",sname);
	printf("your name is %s \n",name);
	printf("your surname is %s \n",sname);
   	printf("your name is %s \t",name);
	printf("your surname is %s \n",sname);

   	printf("your name is %s \b",name);
	printf("your surname is %s \n",sname);
	printf("your name is %s \r",name);
	printf("your surname is %s* \n",sname);

	return 0;
}
