#include<stdio.h>
void print(int *distance, int people)
{
	for (int i=0;i<people;i++)
	{
		printf("%d %d\n",distance[i],i);
	}
	printf("\n");
}

void merging(int *distance, int l, int mid, int r)
{
	int i = l;
	int j = mid+1;
	int k = 0;
	int temp[100005];
	
	while (i<=mid && j<=r)
	{
		if (distance[i]<distance[j])
		{
			temp[k] = distance[i];
			k++;
			i++;
		}else
		{
			temp[k] = distance[j];
			k++;
			j++;
		}
	}
	
	while (i<=mid)
	{
		temp[k] = distance[i];
		k++;
		i++;
	}
	while (j<=r)
	{
		temp[k] = distance[j];
		k++;
		j++;
	}
	
	for (i = l, j = 0; i<=r; i++, j++){
		distance[i] = temp[j];
	}
}

void merge(int *distance, int l, int r)
{
	int mid;
	if (l<r)
	{
		mid = (l+r)/2;
		merge(distance,l,mid);
		merge(distance,mid+1,r);
		merging(distance,l,mid,r);
	}
}

int binary(int *distance, int l, int answer,int r)
{
	int mid;
	
	if (distance[l] > answer)
	{
		printf("0\n");
	}
	else if (distance[r] <= answer)
	{
		printf("%d\n",r+1);
	}
	else
	{
	do
	{
		mid =(l+r)/2;
		if (distance[mid] <= answer && distance[mid-1] <= answer && distance[mid+1] > answer)
		{
			printf("%d\n",mid+1);
			break;
		}
		else if (mid == 0 && distance[l]<=answer){
			printf("%d\n",mid);
			break;
		}
		else if (distance[mid+1] <= answer && distance[mid] <= answer )
		{
			l=mid;
		}
		else if (distance[mid+1] >= answer)
		{
			r=mid;
		}
		
	}while (l<=r);
	
	}
}
		


int main()
{
	int orang, pertanyaan;
	int jarak[100005], jawab;
	scanf("%d %d",&orang, &pertanyaan); getchar();
	for (int i=0;i<orang;i++)
	{
		scanf("%d",&jarak[i]); getchar();

}
//	quick(distance,1,people);
	merge(jarak,0,orang-1);
//	print(distance,people);
	
	for (int j=0;j<pertanyaan;j++){
		scanf("%d",&jawab);
		
		binary(jarak,0,jawab,orang-1);
		
	}
	return 0;
}
