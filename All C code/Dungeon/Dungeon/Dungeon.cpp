#include<stdio.h>
int main ()
{	int lit;
	scanf("%d",&lit);
	fflush(stdin);
	int x,y,z;
	for (x=1;x<=lit;x++)
	{
	int room[1000],num,left=0,right=0,large=0,largenum=0;
	scanf("%d",&num);
	fflush(stdin);
		for(y=1;y<=num;y++)
		{
		scanf("%d",&room[y]);
		}
		fflush(stdin);
		for(y=1;y<=num;y++)
		{if(room[y]>large)
		{large=room[y]; largenum=y;}
		else{}
		}
			for(y=1;y<largenum;y++)
			{if(room[y]==1)
				{}
			else{left+=room[y];}
			}
			for(z=num;z>largenum;z--)
			{if(room[z]==1)
				{}
			else{right+=room[z];}
			}
		if(left=right){printf("Same\n");}
		if(left<right){printf("Left\n");}
		if(left>right){printf("Right\n");}

	}
	getchar();
	return 0;
}