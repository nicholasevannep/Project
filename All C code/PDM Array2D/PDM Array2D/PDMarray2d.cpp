#include<stdio.h>
int main()
{	int matriks[2][4]={{5,6,7,8},{9,10,11,12}};
	int baris,kolom;
	for(baris=0;baris<2;baris++)
	{
		for(kolom=0;kolom<4;kolom++)
		{
			printf("%d",matriks[baris][kolom]);
		}
	}
	getchar();
	return 0;
}