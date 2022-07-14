#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int value = 0;
	printf("enter the value ");
	scanf("%d", &value);
	switch (value / 10)
	{
		case 10:
		case 9:
		case 8:
			printf("your grade is A\n");
			break;
		case 7:
			printf("your grade is B\n");
			break;
		case 6:
			printf("your grade is C\n");
			break;
		default:
			printf("your grade is D\n");
		
	}
}
