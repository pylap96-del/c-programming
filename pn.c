#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("enter any number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n/i==2)
		count++;
	}
	if(count==2)
	{
		printf("it is a prime");
	}
	else
	{
		printf("it is not a prime");
	}
	return 0;

}
