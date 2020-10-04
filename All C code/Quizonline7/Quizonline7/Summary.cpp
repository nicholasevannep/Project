#include<stdio.h>
int main()
{	
	FILE *p;
	p = fopen("testdata.in","r");
	int data[1000];
	int n=0;
	while (!feof(p))
	{
		fscanf(p,"%d ",&data[n]);
		n++;
	}
	int sum=0;
	for(int j=0;j<n;j++)
	{	
		sum+=data[j];
	}
	double avg;
	avg=double(sum)/double(n);
	int min=1000001;
	for(int j=0;j<n;j++)
	{	if(data[j]<min){min=data[j];}
	}
	int max=0;
	for(int j=0;j<n;j++)
	{	if(data[j]>max){max=data[j];}
	}
	int range;
	range=max-min;

	printf("Count : %d\n",n);
	printf("Sum   : %d\n",sum);
	printf("Mean  : %.2lf\n",avg);
	printf("Min   : %d\n",min);
	printf("Max   : %d\n",max);
	printf("Range : %d\n",range);

	fclose(p);
	
	return 0;
}