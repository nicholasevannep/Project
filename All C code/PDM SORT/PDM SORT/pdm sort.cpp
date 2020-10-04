#include<stdio.h>

int main()
{
int a,b,c, temp,i, j;

printf("Mengurutkan nilai dari besar ke kecil\n");
printf("Masukan banyaknya angka yang akan diurutkan : ");
scanf("%d", &b);
int d[100];
printf("Masukan nilai : ");
for(i=0;i<b;i++)
{
scanf("%d",&d[i]);
}
fflush(stdin);
for(i=0;i<b;i++)
{
for(j=i+1;j<b;j++)
{
if(d[i]<d[j])
{
a=d[i];
d[i]=d[j];
d[j]=a;
}
}
}
printf("Nilai setelah diurutkan :");
for(i=0; i<b; i++)
{
printf(" %d", d[i]);
}
printf("\n");
getchar();
return 0;
}