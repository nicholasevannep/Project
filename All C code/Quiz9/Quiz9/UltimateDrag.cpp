#include<stdio.h>

void mergesort(long long data[],int low,int mid,int high)
{
    int i,m,k,l,temp[100000];

    l=low;
    i=low;
    m=mid+1;

    while((l<=mid)&&(m<=high))
 	{
	 	if(data[l]<=data[m])
		{
             temp[i]=data[l];
             l++;
        }
         else
   		{
             temp[i]=data[m];
             m++;
        }
        i++;
    }
    if(l>mid)
	{
         for(k=m;k<=high;k++)
		 {
             temp[i]=data[k];
             i++;
         }
    }
    else
 	{
         for(k=l;k<=mid;k++)
		 {
             temp[i]=data[k];
             i++;
         }
    }
    for(k=low;k<=high;k++)
	{
         data[k]=temp[k];
    }   
}

void partisi(long long data[],int low,int high)
{
    int mid;

    if(low<high)
 	{	
         mid=(low+high)/2;
         partisi(data,low,mid);
         partisi(data,mid+1,high);
         mergesort(data,low,mid,high);
    }
}

int search(long long data[], int key, int low, int high){
	int tengah;
	while(low<=high){
		tengah = (low+high)/2;
		
		if(key < data[tengah]){
			high = tengah - 1;
		}else if(key > data[tengah]){
			low = tengah + 1;
		}else{
			return tengah+1;
		}
	}
	return low;
}

int main(){
	int people, test,test2,count = 0,cek = 0;;
	long long orang[100010],temp;
	scanf("%d %d",&people,&test);
	for(int i=0; i<people; i++){
		scanf("%lld",&orang[i]);
	}
	
	partisi(orang, 0, people-1);
	
	for(int j=0; j<test; j++){
		scanf("%d",&test2);
		if(test2 > orang[people-1]) printf("%d\n",people);
		else{
			cek = search(orang,test2,0,people-1);
			printf("%d\n",cek);
		}
	}
}
