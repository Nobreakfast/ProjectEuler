#include<stdio.h>

int main()
{
	int sum=0,n=1,max;
	printf("enter the number:");
	scanf("%d",&max);
	while(n<max)
	{
		if (n%3==0||n%5==0)
			{
				printf("%d",sum);
				sum=sum+n;
				printf("+%d=%d\n",n,sum);
			}
		n++;
	}
	printf("%d\n",sum);
	return 0;
}
