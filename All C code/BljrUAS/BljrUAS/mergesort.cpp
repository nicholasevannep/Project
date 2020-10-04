//#include<stdio.h>
//
//int binarysearch(int arr[],int l,int r,int find)
//{	if(r>=1)
//	{
//	int mid;
//	mid = l+(r-l)/2;
//	if(mid==find){return mid;}
//	else
//	if(mid>find){return binarysearch(arr,l,mid,find);}
//	else
//	if(mid<find){return binarysearch(arr,mid+1,r,find);}
//	}return -1;
//
//}
//
//
//void merge(int arr[],int l,int m,int h)
//{	int n1;int n2;
//	n1=m-l+1;
//	n2=h-m;
//
//	int k1[100];int k2[100];
//	for(int i=0;i<n1;i++){k1[i]=arr[l+i];}
//	for(int j=0;j<n2;j++){k2[j]=arr[m+1+j];}
//	
//
//	int i=0,j=0,k=l; 
//
//	while(i<n1 && j<n2)
//	{
//		if(k1[i]<=k2[j])
//		{ arr[k]=k1[i];
//		i++;
//		}
//		else
//		{
//		arr[k]=k2[j];
//		j++;
//		}
//		k++;
//	}
//
//	while(i<n1)
//	{
//		arr[k]=k1[i];
//		k++;
//		i++;
//	}
//	while(j<n2)
//	{
//		arr[k]=k2[j];
//		k++;
//		j++;
//	}
//}
//void mergesort(int arr[], int l,int h)
//{
//	if(l<h)
//	{
//		int m=l+(h-l)/2;
//		mergesort(arr,l,m);
//		mergesort(arr,m+1,h);
//
//		merge(arr,l,m,h);
//	}
//}
//
//int main()
//{	
//	int data[15]={7,3,4,5,1,6,10,8,9,2};
//	mergesort(data,0,9);
//	for(int i=0;i<10;i++)
//	{
//		printf("%d\n",data[i]);
//	}
//	int find;
//	scanf("%d",&find);
//	fflush(stdin);
//	printf("%d",binarysearch(data,0,9,find));
//
//	getchar();
//	return 0;
//}