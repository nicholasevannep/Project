#include<stdio.h>

void merge(int arr[],int l,int m,int r)
{
	int n1=m-l + 1;
	int n2=r-m;
	int L[1000],R[1000];

	for(int i=0;i<n1;i++){L[i]=arr[l+i];}
	for(int j=0;j<n2;j++){R[j]=arr[m+1+j];}

	int i=0,j=0,k=l;
	while(i<n1 && j<n2) 
	{
		if(L[i]<=R[j])
		{
			arr[k]=L[i];
			i++;
		}
		else
		{
		arr[k]=R[j];
		j++;
		}k++;
	}
	while(i<n1)
	{arr[k]=L[i];
	i++;
	k++;
	}
	while(j<n2)
	{arr[k]=R[j];
	j++;
	k++;
	}


}

void mergesort(int arr[],int l,int r)
{	if(l < r)
	{
	int m;
	m=l+(r-l)/2;

	mergesort(arr,l,m);
	mergesort(arr,m+1,r);

	merge(arr,l,m,r);
	}
}



int main()
{	
	int x[10]={5,3,2,1,6,7,8,9,10,4};
	for(int k=0;k<10;k++)
	{
		printf("%d\n",x[k]);
	}
	mergesort(x,0,9);
	for(int k=0;k<10;k++)
	{
		printf("%d\n",x[k]);
	}

	getchar();
	return 0;
}