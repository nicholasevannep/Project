//#include<stdio.h>
//int main()
//{
//	int lit1,lit2;
//	scanf("%d",&lit1);
//	fflush(stdin);
//	for(int i=1;i<=lit1;i++)
//	{	scanf("%d",&lit2);
//		fflush(stdin);
//		int start[10005],end[10005];
//		for(int j=1;j<=lit2;j++)
//		{
//		scanf("%d %d",&start[j],&end[j]);
//		}
//		fflush(stdin);
//		for(int j=1;j<=lit2;j++)
//		{
//		if(end[j-1]>start[j]){printf("Case #%d: NO\n",i);break;}
//		if(j==lit2){printf("Case #%d: YES\n",i);}
//		}
//	}
//	getchar();
//	return 0;
//}