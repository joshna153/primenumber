#include <stdio.h>
void main()
{
	int i,n;
	int count=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if (count==2)
	{
		printf("%d is a prime number", n);
	}
	else
	{
		printf("%d is NOT a prime number", n);
	}
}
