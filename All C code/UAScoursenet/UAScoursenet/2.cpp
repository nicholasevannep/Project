#include<stdio.h>
#include<string.h>


int main()
{	int lit;
	scanf("%d",&lit);
	fflush(stdin);
	for(int i=1;i<=lit;i++)
	{	int geser;
		char inp[100];
		char banding[100];
		scanf("%s %s",&inp,&banding);
		fflush(stdin);
		strrev(inp);
		strrev(banding);
		int count=0;
		for(int j=0;j<strlen(inp);j++)
		{	geser=j;
			for(int k=0;k<strlen(banding);k++)
			{
				if(inp[j+k]==banding[k])
				{count++;
				if(count==strlen(banding)){break;}
				}
				else {count=0; break;}
			}
			if(count==strlen(banding)){break;}
		}
		/*printf("%d\n",count);
		printf("%d\n",geser);
*/
		if(count==strlen(banding))
		{
			strrev(inp);
			for(int x=0;x<strlen(inp)-geser;x++)
			printf("%c",inp[x]);
		}
		else{printf("beda\n");}
	}


	getchar();
	return 0;
}