//#include<stdio.h>
//
//int main()
//{	
//	int org;
//	int quest;
//	int attk[100001];
//	scanf("%d %d",&org,&quest);
//	for(int i=0;i<org;i++)
//	{
//	scanf("%d",&attk[i]);
//	}
//	for(int j=1;j<org;j++)
//	{for(int k=0;k<org;k++)
//		if(attk[k]<attk[k-1])
//		{
//			int temp;
//			temp=attk[k];
//			attk[k]=attk[k-1];
//			attk[k-1]=temp;
//		}
//	}
//	for(int l=0;l<quest;l++)
//	{	int org;
//		scanf("%d",&org);
//		fflush(stdin);
//		printf("%d\n",attk[org-1]);
//	}
//	
//
//	getchar();
//	return 0;
//}
