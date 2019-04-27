/*
 * ep24.c
 *
 *  Created on: 2019Äê2ÔÂ9ÈÕ
 *      Author: zclne
 */
#include<stdio.h>
#include <malloc.h>
#define max 10

struct node
{
	int data;
	struct node *next;
}linklist;
long int multi(int a);
void init();
void printlist();
void del(int a);
int isEmpty();

int num[max]={0,1,2,3,4,5,6,7,8,9};

struct node *start, *q, *temp;

int main()
{


init();
// int a=isEmpty();
// printf("%d\n", a);
int point=max,zheng=0,yu=0;
 long int num=999999;
while(isEmpty()==0)
{
	int sum=multi(point-1);
	if(num<sum)
	{
		del(1);
		--point;
		continue;
	}
	else
	{
		zheng=num/sum;
		num=num%sum;
		del(zheng+1);
		--point;
	}

}

printlist();




	return 0;
}

long int multi(int a)
{
	long int temp=1;
	for (int i = 0; i < a; ++i)
	{
		/* code */
		temp=temp*(i+1);
	}
	return temp;
}


void init()
{
		start = (struct node*)malloc(sizeof(struct node));
	
	q = start;
	for (int i = 0; i < max; ++i)
	{
		temp = (struct node*)malloc(sizeof(struct node));
		temp->data=num[i];
		q->next = temp;
		q = temp;
	}
	q->next = NULL;

}
void printlist()
{

	q=start;
	while(q->next!=NULL)
	{
		q=q->next;
		printf("%d\n", q->data);
	}
}
void del(int a)
{
	q=start;
	int s=0;
	while(s<a-1)
	{
		q=q->next;
		++s;
	}
	printf("%d\n", q->next->data);
	q->next=q->next->next;
}
int isEmpty()
{
	q=start;
	return q->next==NULL;
}