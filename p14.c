/*
 * ep14.c
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: zclne
 */
#include<stdio.h>

int ep14()
{
	long long num,larger=0,count,largernum=0;
	for(long long i=13;i<1000001;i++)
	{
		count=1;
		num=i;
		while(1)
		{
			if(num%2==1)
				num=3*num+1;
			else
				num=num/2;
			count++;
			if(num==1)
				break;
		}

		if(larger<count)
		{
			larger=count;
			largernum=i;
		}
	}
	printf("%lld by  %lld",larger,largernum);
	return 0;
}

