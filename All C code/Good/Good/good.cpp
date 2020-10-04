#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{	int lit;
	scanf("%d\n",&lit);
	fflush(stdin);
	for(int i=1; i<=lit;i++)
	{
		char inp[90];
		char fin[90];
	

		gets(inp);
		
		for(int j=0;j<=strlen(inp);j++)
		{
			fin[j]=tolower(inp[j]);
		}
		for(int k=0;k<=strlen(inp);k++)
		{
			if (fin[k]=='g' && fin[k+1]=='o' && fin[k+2]=='o' && fin[k+3]=='d' )
			{printf("Case #%d: yes\n",i);break;}
			else if (k==strlen(inp)){printf("Case #%d: no\n",i);break;}
		}
		
	}
	getchar();
	return 0;
}