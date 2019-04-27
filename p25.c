#include <stdio.h>

int fibonacci(int a)
{
	if((a==1)||(a==2))
	{
		return 1;
	}
	else
		return fibonacci(a-1)+fibonacci(a-2);
}

int main()
{
	int a1=1,a2=1,sum=0,max=1000,num=2;
	int bit=7;
	while(bit<max)
	{
		++num;
		
		sum=a1+a2;
		a1=a2;
		a2=sum;
		if(sum>9999999)
		{
			sum=sum/10;
			a1=a1/10;
			a2=a2/10;
			bit++;
		}
	}

	printf("%d\n", num);
	// printf("%d\n", fibonacci(num));
	return 0;
}
