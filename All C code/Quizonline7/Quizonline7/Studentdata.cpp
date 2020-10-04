//#include<stdio.h>
//struct 
//{
//	int urutan;
//	int d;
//	int m;
//	int y;
//	char nama[105];
//	char tempat[105];
//}inp[1000];
//
//int main()
//{	int check[1000];
//	int lit;
//	scanf("%d",&lit);
//	fflush(stdin);
//	for(int i=1;i<=lit;i++)
//	{
//	scanf("%d %d %d %d %s %s",&inp[i].urutan,&inp[i].d,&inp[i].m,&inp[i].y,&inp[i].nama,&inp[i].tempat);
//	fflush(stdin);
//	check[inp[i].urutan]=1;
//	}
//	int out;
//	scanf("%d",&out);
//	fflush(stdin);
//	for(int j=1;j<=out;j++)
//	{
//		int angka;
//		scanf("%d",&angka);
//		fflush(stdin);
//		if(check[angka]==1)
//			{
//				for(int i=1;i<=lit;i++)
//				{	if(angka==inp[i].urutan)
//				{
//				printf("%d. %s was born on %d/%d/%d and live at %s\n",inp[i].urutan,inp[i].nama,inp[i].d,inp[i].m,inp[i].y,inp[i].tempat);}
//				}
//			}
//		else{printf("No data found!\n");}
//	}
//	getchar();
//	return 0;
//}