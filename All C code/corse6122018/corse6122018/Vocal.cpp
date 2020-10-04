#include<stdio.h>
#include<string.h>
int check(char inp[],int n,int sum)
{	
	if(inp[n]=='\0')
	{
		return sum;
	}
	else if (inp[n]=='A'||inp[n]=='I'||inp[n]=='U'||inp[n]=='O'||inp[n]=='a'||inp[n]=='i'||inp[n]=='u'||inp[n]=='e'||inp[n]=='o')
	{
	return check(inp,n+1,sum+=1);}
	else {return check(inp,n+1,sum+=0);}
}


int main()
{	char inp[100];
	int sum=0;
	int n;
	gets(inp);
	n=0;
	sum=check(inp,n,sum);
	printf("%d",sum);
	getchar();
	return 0;
}