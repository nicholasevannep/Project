#include<stdio.h>


int main()
{	
	int angka[8]={70,60,30,50,40,20,80,90};
	int temp;
	for(int x=0;x<8;x++)
	{
		for(int i=7;i>x;i--)
		{
		if(angka[i]<angka[i-1])
		{temp=angka[i-1];
		angka[i-1]=angka[i];
		angka[i]=temp;}
		}
	}
	for(int j=0;j<8;j++)
	{

		printf("%d ",angka[j]);
	}

	getchar();
	return 0;
}