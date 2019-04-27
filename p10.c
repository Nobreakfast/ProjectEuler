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
	long long sum=2;int n=1;
	printf("n:1	pf:2	sum=2\n");
	for (int i=3;i<2000000;i++)
		if(pf(i)==0)
		{
			n++;
			sum=sum+i;
			printf("n:%d	pf:%d	sum=%lld\n",n,i,sum);
		}
}
