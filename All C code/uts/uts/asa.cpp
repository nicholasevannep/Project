#include<stdio.h>
#include<string.h>
int main(){
	int inp,sum;
	char a[100];
	scanf("%d",&inp);
	fflush(stdin);
	for(int i=1;i<=inp;i++){
	scanf("%[^\n]s",&a);
	fflush (stdin);
	sum=strlen(a)-1;
		for(int j=0;j<strlen(a)-1;j++)
		{ if(j==0)
			{
			printf("%c^%d * %c^%d",a[j],sum,a[j+1],sum);
			}
			else 
			{printf(" + %c^%d * %c^%d",a[j],sum,a[j+1],sum);}
			sum--;
		}
		printf("\n");
	}
getchar();
return 0;
}