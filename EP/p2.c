#include<stdio.h>

int main()
{
	int a=1,b=2,sum=0,sume=2,max;
	printf("enter the number:");
	scanf("%d",&max);
	while(1)
	{
		sum=a+b;
		a=b;
		b=sum;
		if (sum>max)
			break;	
		if (sum%2==0)
		{
			printf("%d",sume);
			sume=sume+sum;
			printf("+%d=%d\n",sum,sume);
		}
	}
	return 0;
}
