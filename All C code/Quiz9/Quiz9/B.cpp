//#include<stdio.h>
//
//int main()
//{	int lit;
//	scanf("%d",&lit);
//	fflush(stdin);
//	for(int i=1;i<=lit;i++)
//	{	int n=1;
//		int ang;
//		long long arr[100001];
//		long long  sum=0;
//		scanf("%d",&ang);
//		fflush(stdin);
//		long int ang1=0,ang2=1,ang3;
//		for(int j=1;j<=ang;j++)
//		{
//			if(j==1)
//			{ang1=0;ang2=1;ang3=0;sum=1;}
//			else
//			{ang1=ang2;ang2=ang3;ang3=ang1+ang2;sum+=ang3;}
//		}
//		sum%=1000000009;
//		printf("%lld\n",sum);
//
//	}
//	
//	
//
//
//	getchar();
//	return 0;
//}