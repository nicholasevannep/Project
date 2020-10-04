#include<stdio.h>
#include<string.h>
int main()
{
	char name[100],x[10]="Limmy";
	scanf("%s",name);
	fflush(stdin);
	
	if(strcmp(name,x)==0)
	{printf("It's steel, because steel is heavier than feathers.\n");}
	else {printf("It's the same, they're both a kilogram.\n");}
getchar();
return 0;
}