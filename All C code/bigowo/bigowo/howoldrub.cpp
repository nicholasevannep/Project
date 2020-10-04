#include<stdio.h>
struct{
int age;
char name[35];
}inp[101];

int strlen(char inp[],int count, int n)
{	if(inp[n]=='\0')
	{return count;}
else{count++;n++ ;return strlen(inp,count,n);}
	
}



int main()
{	int lit;
	scanf("%d",&lit);
	for(int i=0;i<lit;i++)
	{
		scanf("%d %s",&inp[i].age,&inp[i].name);
		fflush(stdin);
	}
	int lit2;
	scanf("%d",&lit2);
	fflush(stdin);
	for(int j=0;j<lit2;j++)
	{	char inp2[101];
		scanf("%s",&inp);
		int count=0;
		int n=0;
		int t=0;
		for(int i=0;i<lit;i++)
		{
			if(strlen(inp2,count,n)!= strlen(inp[i].name,count,n))
			{
				break;
			}
			for(int x=1)
			
		}
	}
	getchar();
	return 0;

}