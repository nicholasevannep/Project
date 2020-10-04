#include<stdio.h>
#include<string.h>
int main()
{	int lit,x,y,z;
	int org;
	
	scanf("%d",&lit);
	

	for(x=1;x<=lit;x++)
	{scanf("%d",&org);
	
	int lantai[19]={},sum=0;
	for(y=0;y<org;y++)
	{scanf("%d",&z);
	if(lantai[z-1]==1 || lantai[z]==1 || lantai[z+1]==1)
	{}
	else
	{
	lantai[z]=1;sum++;
	}
	}
	printf("Case #%d: %d\n",x,sum);
	}


	return 0;
}