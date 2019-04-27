#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,max=1000;
	for (a=1;a<max;a++)
		for (b=1;b<max;b++)
			if ((a*a+b*b-(1000-a-b)*(1000-a-b))==0)
				printf("a=%d	b=%d	c=%d\n	abc=%d\n",a,b,1000-a-b,a*b*(1000-a-b));
	return 0;
}
