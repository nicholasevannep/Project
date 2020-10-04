#include <stdio.h>

void sequential()
{
	float inp,tax,sum;
	printf("Harga: ");
	scanf("%f",&inp); fflush(stdin);
	if(inp>100000 && inp<1000000)
	{inp*=0.75;
	} 
	else if(inp>1000000 && inp<5000000)
	{inp*=0.5;} 
	else if(inp>5000000)
	{inp*=0.25;}
	tax=inp*0.1;
	sum=tax+inp;
	printf("Total pembayaran: %.3f\n",sum);
}

int main()
{
	sequential();
	getchar();
}
