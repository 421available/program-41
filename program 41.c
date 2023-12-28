#include<stdio.h>
void main()
{
	int n,i;
	unsigned long long fact=1;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n<0)
	printf("Error! factorial of a negative number dose not exist.");
	else
	{
		for(i=1;i<=n;i++)
		{
			fact *=i;
		}
	printf("factorial of %d=%llu",n,fact);
}
}
