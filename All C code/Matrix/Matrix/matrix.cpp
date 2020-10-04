#include<stdio.h>
int main()
{	int lit,size,x,row,col;
	scanf("%d",&lit);
	

	for(x=1;x<=lit;x++)
	{ scanf("%d",&size);

	  int matrix[101][101]={},largestrow,largestcol;
		for(row=0;row<size;row++)
		{
		for(col=0;col<size;col++)
		{
			scanf("%d",&matrix[row][col]);
		}
		}
		printf("Case #%d:\n",x);
		printf("Row :");
		largestrow=matrix[0][0];
			for(row=0;row<size;row++)
			{
			for(col=0;col<size;col++)
			{
			if(largestrow<matrix[row][col])
			{largestrow=matrix[row][col];}
			}
			printf(" %d",largestrow);
			largestrow=-128;
			}
		printf("\n");
		printf("Col :");
		largestcol=matrix[0][0];
			for(col=0;col<size;col++)
			{
			for(row=0;row<size;row++)
			{
			if(largestcol<matrix[row][col])
			{largestcol=matrix[row][col];}
			}
			printf(" %d",largestcol);
			largestcol=-128;
			}
		printf("\n");
	}

	getchar();
	return 0;
}