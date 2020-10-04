#include<stdio.h>
#include<math.h>
int main()
{
 long int n,k;

 int x;
 scanf("%li %li",&n,&k);
 for(x=0;x<k;x++)
 {
	 n=n*2;
 }
 printf("%li\n",n);
return 0;
}