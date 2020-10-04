#include<stdio.h>

int main()
{	int lit;
	scanf("%d\n",&lit);
	for(int i=1;i<=lit;i++)
	{ char pos[120][120];
		int row,col;	
		scanf("%d %d\n",&row,&col);
		for(int j=0;j<row;j++)
		{gets(pos[j]);}
		int now=0;
		int count=1;
		for(int a=1;a<row;a++)
		{
			for(int b=0;b<col;b++)
			{	if(pos[a][b]!='.')
				{ 
				if(pos[a-1][b]!='|'&& pos[a-1][b-1]!='\\'&& pos[a-1][b+1]!='/'){count++;}
				}
			}
			
		}
		printf("Case #%d: %d\n",i,count);
	}
	
	
	return 0;
}