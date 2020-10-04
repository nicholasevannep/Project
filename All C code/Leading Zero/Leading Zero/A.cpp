#include<stdio.h>
#include<string.h>
int main ()
{	char inp[11];
	int f,a,b;
	
	a=0;
	b=0;
	f=0;
	scanf("%s",&inp);
	fflush(stdin);
	for(int i=0;i<strlen(inp);i++)
	{
	a=inp[i];
	b=inp[i-1];
	if((a-b)>1)
	{f+=1;}
	printf("%d",inp[i]);
	}
	if(f>0)
	{
	printf("False");
	}
	else {printf("True");}
	getchar();
	return 0;
}