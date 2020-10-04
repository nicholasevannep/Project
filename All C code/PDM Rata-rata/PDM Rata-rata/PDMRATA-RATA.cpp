#include<stdio.h>
int main()
{
	float nilai[5],jumlah,rata2;
	printf("Program Mengitung Rata-Rata\n");
	jumlah=0;
	for(int i=0;i<5;i++)
	{
	scanf("%f",&nilai[i]);
	fflush(stdin);
	jumlah+=nilai[i];
	}
	rata2=jumlah/5;
	printf("Nilai rata-rata adalah %f",rata2);
	getchar();
	return 0;
}