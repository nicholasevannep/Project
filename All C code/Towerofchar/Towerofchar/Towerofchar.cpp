#include<stdio.h>
int main()
{
 int x,row,column,space;
 char alpha=64;

 scanf("%d",&x);
 fflush(stdin);

 for(row=1;row<=x;row++)
 { alpha++;
	for(space=x-row;space>=1;space--)
	{
		printf(" ");
	}
	for(column=1;column<=row;column++)
	{
		printf("%c ",alpha);
	}
	printf("\n");
 }

 getchar();
 return 0;
}