#include<stdio.h>
int main()
{	int lit,x,y;
	scanf("%d",&lit);
	fflush(stdin);
	for(x=1;x<=lit;x++)
	{	double anggota;
		double beda,level[1000],min,max;
		scanf("%lf %lf",&anggota ,&beda);
		fflush(stdin);
		min=1000000000;max=0;
		for(y=1;y<=anggota;y++)
		{	scanf("%lf",&level[y]);
			if(min>level[y]){min=level[y];}
			if(max<level[y]){max=level[y];}
		} 
			fflush(stdin);
			if(max-min<=beda){printf("Case #%d: YES\n",x);}
			else if(max-min>beda){printf("Case #%d: NO\n",x);}
	}
	getchar();
	return 0;
}