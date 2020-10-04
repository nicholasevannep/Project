#include<stdio.h>

struct
{
	char size;
	int type;
}baju[1000];

int main()
{
	int lit;
	scanf("%d",&lit);
	fflush(stdin);
	for(int i=1;i<=lit;i++)
	{
		int lit2;
		scanf("%d",lit2);
		for(int j=1;j<=lit2;j++)
		{
			scanf("%c %d",&baju[j].size,&baju[j].type);
			fflush(stdin);
		}

	}
	getchar();
	return 0;
}