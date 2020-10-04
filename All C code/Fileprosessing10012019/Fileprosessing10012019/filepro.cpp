//#include<stdio.h>
//struct
//{
//	char name[31];
//	int first;
//	float final;
//
//} cust[101];
//
//void swap(int *x,int *y)
//{
//	int temp=*x;
//	*x=*y;
//	*y=temp;
//	
//}
//
//int main()
//{	FILE*p;
//	p = fopen("Customer.txt","w");
//	
//	int org;
//	scanf("%d",&org);
//	fflush(stdin);
//	for(int i=0;i<org;i++)
//	{
//		gets(cust[i].name);
//		scanf("%d",&cust[i].first);
//		fflush(stdin);
//
//		while(cust[i].first<500)
//		{ printf("Min 500\n");
//		scanf("%d",&cust[i].first);
//		fflush(stdin);
//		}
//
//		if(cust[i].first<1000)
//		{
//			cust[i].final= float(1.06)*float(cust[i].first);
//		}
//		else {cust[i].final= float(1.07)*float(cust[i].first);}
//		
//	}
//	
//	for(int j=0;j<org;j++)
//	{	int temp=j;
//		for(int k=j;k<org;k++)
//		{
//			if(cust[k].final>cust[temp].final)
//			{
//				temp=k;
//				swap(cust[temp],cust[j]);
//			}
//		}
//	}
//	
//
//	getchar();
//	return 0;
//}