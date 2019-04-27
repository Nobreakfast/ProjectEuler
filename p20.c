/*
 * ep20.c
 *
 *  Created on: 2019Äê2ÔÂ8ÈÕ
 *      Author: zclne
 */
#include<stdio.h>
void upbit(int sum[])
{
	for(int i=0;i<200;i++)
		if (sum[i]>9)
			{
				sum[i+1]+=sum[i]/10;
				sum[i]-=sum[i]/10*10;
			}
}
int ep20()
{
	int sum[200];
	int num=0;
	for(int i=0;i<200;i++)
		sum[i]=0;
	int number=100;
	sum[0]=1;
	upbit(sum);
	while(number>0)
	{
	for(int i=0;i<200;i++)
	{
		sum[i]=sum[i]*number;
	}
	upbit(sum);
	number-=1;
	}
	for(int i=0;i<200;i++)
	{
		num+=sum[i];
		printf("%d",sum[i]);
	}
	printf("\n");
	printf("%d\n",num);
	return 0;
}
