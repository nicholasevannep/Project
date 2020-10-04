#include <stdio.h>
#include <string.h>
unsigned long long int pow(unsigned long long int awal,unsigned  long long int pangkat){
    unsigned long long int tot = 1;
    while(pangkat>0){
        if(pangkat%2==1){ 
            tot=(tot*awal);
			}
			awal=(awal*awal);
			pangkat=pangkat/2; 
			}
			return tot;
}
int main() 
{
    int inp;
    scanf("%d",&inp);
	getchar();
    for(int x=1;x<=inp;x++){
	char arr[1000]={};
		int count=-1;unsigned long long int hasil=0;
		scanf("%[^\n]",arr);
		getchar();
	for(int i=0;i<strlen(arr);i++)
		{
		if(arr[i]=='1'||arr[i]=='0')
			{
				count++;
            }
			}
    int i=0;
        for(int k=0; k<=count; ){
            if(arr[i]=='1'&&arr[i-1]!='-')
			{
			hasil+=pow(2, count);
			count--;
            }
            if(arr[i]=='1'&&arr[i-1]=='-')
			{
			hasil-=pow(2, count);
			count--;
            }
            if(arr[i]=='0')
			{
			count--;
            }
			i++;
		}
		printf("Case #%d: %llu\n",x,hasil);
		}

    return 0;
}