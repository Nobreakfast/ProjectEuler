#include<stdio.h>

int pf(int num)
{
	int b;
	for(int i=2;i<num;i++)
		if (num%i==0)
		{
			b=1;
			break;
		}
		else b=0;
	return b;
}
int main()
{
	int max,n=1,i=2;
	printf("enter the number:");
	scanf("%d",&max);
	/*for (int i=2;i<100;i++)
	{
		if (pf(i)==0)
		{
			n++;
			printf("%d	%d\n",n,i);
		}
	}*/
	printf("%d	%d\n",n,i);
	while(n<max)
	{
		if (pf(i)==0)
		{
			n++;
			printf("%d	%d\n",n,i);
		}
		i++;
	}
	return 0;
}
