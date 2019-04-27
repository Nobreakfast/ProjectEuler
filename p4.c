#include<stdio.h>

int pn(int n)
{
	int a,b,c,x,y,z,o;
	a=(n/100000);
	b=(n/10000)%10;
	c=(n/1000)%10;
	x=(n/100)%10;
	y=(n/10)%10;
	z=(n)%10;
	if ((a==z)&&(b==y)&&(c==x)&&(a==9))
		o=1;
	else
		o=0;
	return o;
}

int main()
{
	int a,b,sum;
	for (int i=100;i<1000;i++)
		for(int j=100;j<1000;j++)
			{
				sum=i*j;
				if (pn(sum)==1)
					printf("%d\n",sum);
			}		
	return 0;
}
