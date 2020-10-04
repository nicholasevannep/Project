#include <stdio.h>

int price,tax, discount,sum;
void data1()
{
	scanf("%d",&price); fflush(stdin);
	tax=price*0.1;
}
void data2()
{	discount=0;
	if(price>1000000){
	discount=price*0.25;
	printf("Discount: %d\n",discount);
	} else{
		printf("No Discount\n");
	}
}
int main()
{
	data1();
	data2();
	sum= price-discount+tax;
	printf("Total Price :%d",sum);
	getchar();
}
