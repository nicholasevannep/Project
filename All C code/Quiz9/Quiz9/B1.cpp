#include <stdio.h>
#include <stdlib.h>

int main()
{
	int scan;
	long long penampung = 0;
	long long angka;
	
	scanf("%d",&scan);
	
	for(int i=0;i<scan;i++)
	{
		scanf("%lld",&angka);
		long long angka1=0,angka2=1,angka3;
		
		for(int j=1;j<=angka;j++)
		{
			if(j == 0)
			{
				angka3=angka1;
			}
			else if(j == 1 )
			{
				angka3=angka2;
			}
			else if(j > 1)
			{
				angka3=(angka1+angka2)%1000000009;
				angka1=angka2;
				angka2=angka3;
			}
			penampung = (penampung+angka3)%1000000009;
		}
		printf("Case #%d: %d\n",i+1,penampung);
		angka = penampung = angka1 = angka3 = 0;
		angka2 = 1;
	}
	
	return 0;
}
