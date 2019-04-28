#include <stdio.h>
#include <malloc.h>
#include <math.h>

struct node
{
	int data1;
	int data2;
	struct node *next;
}linklist;
void init();
void add(int da1,int da2);
void printlist();
int numlist();
int *cal_yin(int da);

struct node *start, *q, *temp;
int sq[100];
int daa1=0,daa2=0,tem[2],multi=1;
int max=100;
int main()
{

	init();

	for (int i =  2; i <=max; ++i)
	{
		daa1=i;
		tem[0] = 0;
		tem[1] = 0;
		multi = 1;
		while(tem[1] != 1)
		{
			int *q=cal_yin(daa1);
			tem[0] = *q;
			tem[1] = *(q+1);
			daa1 = tem[0];
			multi = multi*tem[1];
			// printf("work!\n");
		}

		for (int j = 2; j <=max; ++j)
		{
			daa2 = multi*j;
			add(daa1,daa2);
		}
	}


	printlist();

	printf("%d\n", numlist());

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
int numlist()
{
	q=start;
	int num;
	while(q->next != NULL)
	{
		q = q->next;
		++num;
	}
	return num;
}
int *cal_yin(int da)
{
		static int ret[2];
		int flag=0;
		ret[0] = da;
		ret[1] = 1;
		for(int j = 1; j <= da/2; ++j)
			{
				for(int i = 1; i <=10;++i)
					if(pow(j,i) == da)
					{
						ret[0] = j;
						ret[1] = i;
						flag = 1;
						break;
					}
				if(flag == 1)
					break;
			}
		return ret;
}
