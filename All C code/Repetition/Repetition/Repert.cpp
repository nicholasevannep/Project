#include<stdio.h>
int main(){
	int lit,bil,a,b,c,faktor;
	scanf("%d",&lit);
	fflush(stdin);

	for(a=1;a<=lit;a++)//pertambahan bil
	{ scanf("%d",&bil);
	 fflush(stdin);
	 printf("Case #%d:\n",a);
	for(b=1;b<=bil;b++) // pencarian faktor
		 { faktor=0;
			
			for(c=1;c<=b;c++) //jumlah faktor
			{ 
			if(b%c==0)
			{faktor++;}
			}
			
			if(faktor==2)
			{printf("I will become a good boy.\n");}	
		}
	}

	getchar();
	return 0;
}