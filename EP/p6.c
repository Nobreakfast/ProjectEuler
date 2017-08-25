#include<stdio.h>

int main()
{
	int sum1=0,sum2=0;
	for (int i=1;i<101;i++)
		sum1=sum1+i*i;
	for (int i=1;i<101;i++)
		sum2=sum2+i;
	sum2=sum2*sum2;
	printf("%d - %d = %d\n",sum2,sum1,sum2-sum1);
	return 0;
}
