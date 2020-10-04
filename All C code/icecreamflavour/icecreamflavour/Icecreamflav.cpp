#include<stdio.h>
int main()
{ int lit;
	scanf("%d",&lit);
	fflush(stdin);
	for(int i=1;i<=lit;i++)
	{
		int flav[4]={};
		char fl;
		int num;
		scanf("%d",&num);
		fflush(stdin);
		for(int x=0;x<num;x++)
		{
			scanf("%c",&fl);
			fflush(stdin);
			if(fl=='c'){flav[0]+=1;}
			else if(fl=='s'){flav[1]+=1;}
			else if(fl=='v'){flav[2]+=1;}
			else {}
			
		}
		printf("Case #%d:\n",i);
		if(flav[0]>flav[1]&&flav[0]>flav[2])
		{printf("chocolate\n");}
		else if(flav[1]>flav[0]&&flav[1]>flav[2])
		{printf("strawberry\n");}
		else if(flav[2]>flav[1]&&flav[2]>flav[0])
		{printf("vanilla\n");}
		else if(flav[0]==flav[1]&&flav[0]==flav[2])
		{printf("chocolate\nstrawberry\nvanilla\n");}
		else if(flav[0]==flav[1])
		{printf("chocolate\nstrawberry\n");}
		else if(flav[0]==flav[2])
		{printf("chocolate\nvanilla\n");}
		else if(flav[1]==flav[2])
		{printf("strawberry\nvanilla\n");}
		else{}
	}
	
	getchar();
	return 0;
}