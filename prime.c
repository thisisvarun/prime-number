//check a prime number using loops
#include<stdio.h>
void main()
{
	int a,i,n=0;
	printf("enter a number :");
	scanf("%d",&a);
	for (i=2;i<=a;i++)
	{
		if (a%i==0)
		{
			n+=1;
		}
	}
	if (n==1)
	{
		printf("its a prime number");
	}
	else
	{
		printf("its not a prime number");
	}
}
