/*
 * ep21.c
 *
 *  Created on: 2019Äê2ÔÂ8ÈÕ
 *      Author: zclne
 */
#include<stdio.h>
int sumOfdivisors(int num);
int ep21()
{
	int num,sumOfd,sumOfd1,sum=0;
	for(int i=3;i<10000;i++)
	{
		num=i;
		sumOfd=sumOfdivisors(num);
		sumOfd1=sumOfdivisors(sumOfd);
		if((num==sumOfd1)&&(num!=sumOfd))
		{
			printf("%d %d\n",num,sumOfd);
			sum+=i;
		}
	}
	printf("%d\n",sum);
	return 0;
}
int sumOfdivisors(int num)
{
	int sum=1;
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			sum+=i;
//			printf("%d\n",i);
		}
	}
	return sum;
}

