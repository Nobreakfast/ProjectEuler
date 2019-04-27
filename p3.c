#include<stdio.h>

void pf(long long a)
{
	long long n=1;
	int b=0;
	while(b==0)
	{
		n++;
		if (a%n==0)
		{
			printf("%lld\n",n);
			b=1;
		}
	}
	long long c=a/n;
	if (c>1) 
		pf(c);
}

int main()
{
	long long max;
	printf("enter the number:");
	scanf("%lld",&max);
	pf(max);
	return 0;
}
