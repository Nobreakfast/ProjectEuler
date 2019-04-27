/*
 * ep16.c
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: zclne
 */
#include<stdio.h>
#include<math.h>
#include<inttypes.h>
typedef unsigned char	uint8_t;

//int main()
//{
//
//	long long int num;
//	int sum,i;
//	for(i=1;i<100;i++)
//	{
//		num=pow(2,i);
//		sum=0;
//		while(1)
//		{
//			sum=sum+num%10;
//			num=num/10;
//			if(num==0)
//				break;
//		}
//		printf("%d\n",sum);
//	}
//	return 0;
//}
int ep16()
{
	uint8_t num[100000];
	uint8_t para=0;
	num[0]=2;
	for(int k=0;k<999;k++)
	{
		para=0;
	for(int i=0;i<1000;i++)
	{
		num[i]=2*num[i]+para;
		if(num[i]>=10)
		{
			num[i]=num[i]-10;
			para=1;
		}
		else
			para=0;
	}
	}

	for(int k=0;k<1000;k++)
	printf("%d",num[k]);
	printf("\n");
	int sum=0;
	for(int k=0;k<1000;k++)
		sum=sum+num[k];
	printf("%d",sum);
	return 0;
}


