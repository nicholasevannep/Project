#include<stdio.h>
int main()
{	int lit,cse;
	scanf("%d",&lit);
	fflush(stdin);
	for(cse=1;cse<=lit;cse++)
	{	int x,y,row,col;
		scanf("%d %d",&x,&y);
		fflush(stdin);
		printf("Case #%d:\n",cse);
		for(row=0;row<x;row++)
		{
			for(col=0;col<y;col++)
			{
				if(row==0||col==0||row==x-1||col==y-1)
				{printf("#");}
				else{printf(" ");}
			}
			printf("\n");
		}
	}
	getchar();
	return 0;
}