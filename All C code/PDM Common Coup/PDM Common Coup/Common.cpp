#include <stdio.h>
#include <string.h>
#include <ctype.h>

char str[10];
int count=0;

void common(){
	scanf("%s",str);
	fflush(stdin);
	for(int i=0; i<strlen(str); i++)
	{ if(isalpha(str[i]))
	{ count++;}
	}
}
int main(){
	common();
	if(count>0)
	{printf("Wrong\n");
	} else
	{printf("%s",str);
	}
	getchar();
}
