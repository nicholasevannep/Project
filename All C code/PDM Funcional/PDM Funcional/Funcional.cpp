#include <stdio.h>

void sequential()
{
	float inp;
	printf("Harga: ");
	scanf("%f",&inp); fflush(stdin);
	if(inp>100000 && inp<1000000)
	{inp*=0.75;
	printf("Diskon 25%%\n");
	} 
	else if(inp>1000000 && inp<5000000)
	{inp*=0.5;
	printf("Diskon 50%%\n");} 
	else if(inp>5000000)
	{inp*=0.25;
	printf("Diskon 75%%\n");}

	printf("Total pembayaran: %.3f\n",inp);
}

int main()
{
	sequential();
	getchar();
}
