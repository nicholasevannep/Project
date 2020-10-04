#include<stdio.h>

int main()
{	int lit;
	scanf("%d\n",&lit);

	for(int i=1;i<=lit;i++)
	{
		char cell[10][10];
		for(int x=0;x<8;x++)
		{
		gets(cell[x]);
		}
		printf("Case #%d:\n",i);

		for(int x=0;x<8;x++)
		{
			for(int y=0;y<8;y++)
			{
				if(cell[x][y]=='p'||cell[x][y]=='r'||cell[x][y]=='b'||cell[x][y]=='q'||cell[x][y]=='k'||cell[x][y]=='n')
					{ int count=0;
						for(int b=0;b<8;b++)
						{	
							if(cell[x][b]=='R'||cell[x][b]=='Q'){count++;}
						}
							for(int a=0;a<8;a++)
						{	
							if(cell[a][y]=='R'||cell[a][y]=='Q'){count++;}
						}
						if (cell[x-1][y-1]=='K'||cell[x][y-1]=='K'||cell[x+1][y-1]=='K'||cell[x-1][y-1]=='K'||cell[x-1][y]=='K'||cell[x+1][y]=='K'||cell[x-1][y+1]=='K'||cell[x][y+1]=='K'||cell[x+1][y+1]=='K')
						{count++;}
						if (cell[x+1][y-1]=='P'||cell[x+1][y+1]=='P')
						{count++;}
						for(int a=x,b=y;a<8;a++,b++)
						{if(cell[a][b]=='B'||cell[a][b]=='Q') count++;}
						for(int a=x,b=y;a>=0;a--,b--)
						{if(cell[a][b]=='B'||cell[a][b]=='Q') count++;}
						for(int a=x,b=y;a<8;a++,b--)
						{if(cell[a][b]=='B'||cell[a][b]=='Q') count++;}
						for(int a=x,b=y;a>=0;a--,b++)
						{if(cell[a][b]=='B'||cell[a][b]=='Q') count++;}
						if(cell[x-1][y-2]=='N'||cell[x-2][y-1]=='N'||cell[x-2][y+1]=='N'||cell[x-1][y+2]=='N'||cell[x+1][y-2]=='N'||cell[x+2][y-1]=='N'||cell[x+2][y+1]=='N'||cell[x+1][y+2]=='N')
						{count++;}
						
						if(count>0){printf("%c %d\n",y+65,8-x);}
					}
			}
		}

	}
	
	return 0;
}