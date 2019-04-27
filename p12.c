#include<stdio.h>

int div(int num,int n)
{
	n=1;
	printf("%d:1,",num);
	for(int i=2;i<num/2+1;i++)
		if (num%i==0)
		{
			printf("%d,",i);
			n++;
		}
	printf("	n=%d\n",n);
	return n;
}

int main()
{
	int num=1,n=1,i=2,b=0;
	while(n<=500)
	{
		num=num+i;
		n=div(num,n);
		i++;
	}
	return 0;
}
