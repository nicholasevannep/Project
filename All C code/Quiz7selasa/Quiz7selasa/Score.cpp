#include<stdio.h>

struct 
{	
	int nilai;
	char nama[105];
}mhs[100];

int main()
{	int lit;
	scanf("%d",&lit);
	fflush(stdin);
	for(int i=1;i<=lit;i++)
	{
		int inp;
		scanf("%d",&inp);
		fflush(stdin);
		for(int j=1;j<=inp;j++)
		{
			scanf("%s %d",&mhs[j].nama,&mhs[j].nilai);
			fflush(stdin);
		}
		int nilai;
		scanf("%d",&nilai);
		fflush(stdin);
		int count=0;
		printf("Case #%d:\n",i);
		for(int j=1;j<=inp;j++)
		{	
			if(nilai<mhs[j].nilai){printf("%s\n",mhs[j].nama);count++;}
			else if(j==inp&&count==0){printf("No one\n");}
			
		}
	}
	getchar();
	return 0;
}
