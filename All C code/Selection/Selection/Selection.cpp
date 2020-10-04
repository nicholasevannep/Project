#include<stdio.h>
int main()
{	int lit,x;

	for(x=1;x<=3;x++)
		{scanf("%d",&lit);
		fflush(stdin);
		if(lit==1){printf("I love fruit\n");}
		if(lit==2){printf("I love vegetable\n");}
		if(lit==3){printf("No comment\n");}
		}
	getchar();
	return 0;

}