#include <stdio.h>
#include <malloc.h>
struct node
{
	int data1;
	int data2;
	struct node *next;
}linklist;
void init();
void add(int da1,int da2);
void printlist();
void numlist();
int cal_sq(int da);

struct node *start, *q, *temp;
int sq[100];

int main()
{

	for(int i = 2; i<100;++i)
	{
		for(int j = 1; j <= i/2; ++j)
			if(j*j == i)
				sq[i]=j;
	}

	for(int i = 0; i<100;++i)
	{
		printf("%d", sq[i]);
	}
	printf("\n");

	init();
	
	printlist();

	return 0;
}

void init()
{
	start = (struct node*)malloc(sizeof(struct node));
	start->next = NULL;
}
void add(int da1,int da2)
{
	q = start;
	while(q->next!=NULL)
	{
		q = q->next;
		if((q->data1 == da1)&&(q->data2 == da2))
			return;
	}
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data1 = da1;
	temp->data2 = da2;
	q->next = temp;
	temp->next = NULL;
}
void printlist()
{
	q=start;
	while(q->next!=NULL)
	{
		q=q->next;
		printf("%d 	%d\n", q->data1,q->data2);
	}
}
void numlist()
{

}
int cal_sq(int da)
{
	
}