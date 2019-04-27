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

struct node *start, *q, *temp;

int main()
{
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