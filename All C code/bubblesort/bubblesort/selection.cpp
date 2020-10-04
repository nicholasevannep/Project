//#include<stdio.h>
//
//int main()
//{	int angka[8]={70,60,30,50,40,20,80,90};
//	int temp;
//
//	for(int i=0;i<8;i++)
//		{	
//			int min=i;
//			for(int j=i+1;j<8;j++)
//				{
//					if(angka[j]<angka[min]){min=j;}
//				}
//			temp=angka[i];
//			angka[i]=angka[min];
//			angka[min]=temp;
//		}
//
//	for(int j=0;j<8;j++)
//		{
//			printf("%d ",angka[j]);
//		}
//
//	getchar();
//	return 0;
//}