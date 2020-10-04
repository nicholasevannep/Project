#include <stdio.h>
int age;
void umur()
{
	printf("Input age : ");
	scanf("%d",&age);
	fflush(stdin);
}

int main()
{
	umur();
	if(age>=17){
		printf("Could make an ID card.\n");
	} else{
		printf("Can't make an ID card.\n");
	}

	getchar();
}
