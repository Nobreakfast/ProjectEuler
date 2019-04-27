/*
 * ep15.c
 *
 *  Created on: 2019Äê1ÔÂ27ÈÕ
 *      Author: zclne
 */
#include<stdio.h>

int ep15()
{
	long matrix[22][22];
	for(int i=0;i<=21;i++)
		for(int j=0;j<=21;j++)
			matrix[i][j]=0;
	for(int i=1;i<=21;i++)
	{
		matrix[1][i]=1;
		matrix[i][1]=1;
	}
	for(int i=2;i<=21;i++)
		for(int j=2;j<=21;j++)
		{
			matrix[i][j]=matrix[i][j-1]+matrix[i-1][j];
			printf("%ld\n",matrix[i][j]);
		}
	printf("%ld",matrix[21][21]);
	return 0;
}

