#include<stdio.h>
int main()
{
	int lit,x,num,hard=0,easy=0;
	scanf("%d",&lit);
	fflush(stdin);
	for(x=1;x<=lit;x++)
	{
		scanf("%d",&num);
		if(num==1){hard+=1;}
		else{}
	}
	fflush(stdin);
	if(hard>easy){printf("not easy\n");}
	else {printf("easy\n");}
	getchar();
	return 0;;
}