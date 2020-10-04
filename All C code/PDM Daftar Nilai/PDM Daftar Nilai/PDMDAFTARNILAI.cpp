#include<stdio.h>
int main()
{
	int nilai[5][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}};
	int m,n;
	printf("Daftar Nilai\n");
	printf("------------\n");
	printf("|No|M|F|S|\n");
	printf("------------\n");
	for(n=0;n<5;n++)
	{
		printf("|%d|",n+1);
		for(m=0;m<3;m++)
		{printf("%d|",nilai[n][m]);}
			printf("\n");
	}
	printf("------------\n");
	getchar();
	return 0;
}