#include<stdio.h>
#include<string.h>
int main()
{ char inp[100];
	int x,a;
	scanf("%s",&inp);
	fflush(stdin);
	for (x=0;x<=strlen(inp);x++)
	{if (inp[x]=='e'&& inp[x-1]=='r')
	{printf("e:");}
	else{printf("%c",inp[x]);}
	}
	printf("\n");
getchar();
return 0;
}