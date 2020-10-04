#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void quicksort(int arr[], int l, int r)
{
   
    if (l >= r)
    {
        return;
    }
    
   
    int pivot = arr[r];
    int cnt = l;

    
    for (int i = l; i <= r; i++)
    {
        
        if (arr[i] <= pivot)
        {
           
            swap(&arr[cnt], &arr[i]);

           
            cnt++;
        }
    }
    
    quicksort(arr, l, cnt-2); 
    quicksort(arr, cnt, r);  
}




int main()
{	int lit1;
	int lit2;
	scanf("%d %d",&lit1,&lit2);
	fflush(stdin);
	int num[100001];
	for(int i=0;i<lit1;i++)
	{
		scanf("%d",&num[i]);
	}fflush(stdin);
	for(int j=0;j<lit1;j++)
	{
		for(int k=lit1-1;k>j;k--)
		{
			int temp;
			if(num[k]<num[k-1])
			{temp=num[k];
				num[k]=num[k-1];
				num[k-1]=temp;
			}
		}
	}
	for(int m=0;m<lit2;m++)
	{	int attk;
		scanf("%d",&attk);
		fflush(stdin);
		for(int n=0;n<lit1;n++)
		{
			if(attk>=num[n-1]&&attk<num[n])
			{printf("%d\n",n);break;
			}
			
		}
	}

	getchar();
	return 0;
}