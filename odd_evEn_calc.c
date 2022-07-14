/***
 * if(conditions)
 * {
 * true statement
 * }
 * else
 * {
 * false statement
 * }
 */
#include <stdio.h>

void main(void)
{
	int a,b,sum,num,sum2;
	long long unsigned  int product;

	char choice;
	printf("do you want to check for even or odd number [e/o]\n");
	scanf("%c",&choice);
		if (choice == 'e')
		{
			printf("enter the range of number to be checked\n");
			scanf("%d  %d",&a,&b);
			sum = 0;
			num = 0;
			sum2 = 0;
			product = 1;
			while (a >= 0  && a <= b)
			{
				sum++;
				if(a % 2 == 0)
				{
					sum2 += a;
					product *= a;
					if (a == b)
					{
						printf("%d\n",a);
						num++;
					}
					else
					{
						printf("%d, ",a);
						num++;
					}
				}
				a++;
			}
			printf("\nthe number of iteration is : %d\n",sum);
			printf("the number of values generated: %d\n",num);
			printf("the total sum is : %d\n",sum2);
			printf("the total product is :%llu\n",product);
		printf("\n");
		}
		else if (choice == 'o')
		{
			printf("enter the range of number to checked \n");
			scanf("%d %d",&a,&b);
			num = 0;
			sum = 0;
			sum2 = 0;
			product = 1;
			while (a >= 0 && a <= b)
			{
				sum++;
				if (a % 2 != 0)
				{
					product *= a;
					sum2 += a;
					if (a +1 == b || a == b )
					{
						num++;
						printf("%d\n",a);
					}
					else
					{
						num++;
						printf("%d, ",a);
					}
				}
				a++;
			}
			printf("\nth number of iteration is : %d\n",sum);
			printf("the number of values generated: %d\n",num);
			printf("the total sum is : %d\n",sum2);
			printf("the total product is : %llu\n",product);
			printf("\n");
		}
		else
		{
			printf("we don't have that functionality yet\n");
		}
}
