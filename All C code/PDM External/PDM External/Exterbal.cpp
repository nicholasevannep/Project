#include <stdio.h>
float x, tax;
void external()
{
	printf("Price: ");
	scanf("%f",&x); fflush(stdin);

	if(x<100000){
		tax=0;
	} else{
		tax=x*0.1;
	}
}

int main()
{
	external();

	float total = x+tax;
	printf("%f\n",total);
	getchar();
}
