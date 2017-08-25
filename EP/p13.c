#include<stdio.h>

int main()
{
	FILE *fp;
	fp = fopen("p13.txt","r");
	char a[100][100];
	fscanf(fp,"%s",a[1]);
	printf("%s\n",a[1]);
	fclose(fp);	
	return 0;
}
