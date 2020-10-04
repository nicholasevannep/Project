//#include<stdio.h>
//
//struct
//{
//	char size;
//	int type;
//	int count;
//}baju[1001];
//
//
//int main()
//{	int lit;
//	scanf("%d",&lit);
//	fflush(stdin);
//	for(int i=1;i<=lit;i++)
//	{	int lit2;
//		scanf("%d",&lit2);
//		fflush(stdin);
//		for(int j=1;j<=lit2;j++)
//		{	char size;
//			int type;
//			scanf("%c %d",&size,&type);
//			fflush(stdin);
//			for(int k=1;k<=j;k++)
//			{
//				if(size==baju[k].size && type==baju[k].type)
//				{
//					baju[k].count=+1;
//				}
//				else if (k==j)
//				{
//					baju[k].count=1;
//				}
//				else {}
//			}
//			
//		}
//		for(int k=1;k<=lit2;k++)
//			{
//			printf("%d\n",baju[k].count);
//			}		
//
//	}
//	getchar();
//	return 0;
//}