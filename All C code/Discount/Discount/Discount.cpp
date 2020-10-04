#include<stdio.h>
int main()
{	int lit,x,y;
	scanf("%d",&lit);

	for(x=1;x<=lit;x++)
	{	float pay=0,price,min,quant;
		scanf("%f %f %f",&price,&min,&quant);		
		for(y=1;y<=quant;y++)
			if(y==1)
			{pay+=price;}
			else
			{price=price/2;
			if(price<=min)
			{pay+=min;}
			else
			{pay+=price;}
			}
		printf("Case #%d: %.3f\n",x,pay);
	}


	return 0;
}