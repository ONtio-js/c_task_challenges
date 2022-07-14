#include <stdio.h>


void main(void)
{
	int a,b,c;

	printf("enter the three values\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a > b && a > c)
	{
		printf ("the maximum number is %d\n",a);
	}
	else if (b > a && b > c)
	{
		printf("the maximum number is %d\n",b);
	}
	else
	{
		printf("the maximum number is %d\n",c);
	}
}
