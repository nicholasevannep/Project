#include<stdio.h>
int main()
{ int lit,bil,tahun,kabisat,x;
	scanf("%d",&lit);
	fflush(stdin);
		for(bil=1;bil<=lit;bil++)
		{ 
		scanf("%d",&tahun);
		fflush(stdin);
		printf("Case #%d: ",bil);
		kabisat=0;
		for(x=4; x<=tahun; x+=4)
		{
			if(x%100==0)
			{ if (x%400==0)
			{kabisat++;}
			}
			else{kabisat++;}
	
		
		}
		printf("%d\n",kabisat);	
		}
	getchar();
	return 0;
}