#include<stdio.h>
//#include<math.h>

void list(int a,int num[20])
{
	int n=1;
	int b=0;
	while(b==0)
	{
		n++;
		if (a%n==0)
		{
			num[n]++;
			b=1;
		}
	}
	int c=a/n;
	if (c>1) 
		list(c,num);
}
int main()
{
	int pf1[20],pf2[20],max;
	printf("enter the number:");
	scanf("%d",&max);
	for (int i=1;i<21;i++)
		pf1[i]=0;
	for (int i=2;i<max+1;i++)
	{
		for (int j=1;j<21;j++)
			pf2[j]=0;
		list(i,pf2);
		for (int j=1;j<max+1;j++)
			if (pf2[j]>pf1[j])
				pf1[j]=pf2[j];
	}
	//int sum=1;
	for (int i=1;i<max+1;i++)
	{	printf("%d %d ",i,pf1[i]);
	//	sum=sum*pow(i,pf1[i]);
	//	printf("%d\n",sum);
		printf("\n");
	}
	//	printf("%d\n",sum);
	return 0;
}
