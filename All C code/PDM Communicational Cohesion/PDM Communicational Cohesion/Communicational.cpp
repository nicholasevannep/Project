#include <stdio.h>

void communicational()
{
	int numb,ans1,ans2,ans3;
	scanf("%d",&numb); fflush(stdin);
	ans1=numb+numb;
	ans2=numb*numb;
	ans3=100%numb;
	printf("%d + %d = %d\n",numb,numb,ans1);
	printf("%d x %d = %d\n",numb,numb,ans2);
	printf("100 modulus %d = %d\n",numb,ans3);

}

int main()
{
	communicational();
	getchar();
}
