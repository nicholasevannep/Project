//#include<stdio.h>
//int main()
//{	int lit;
//	scanf("%d",&lit);
//	fflush(stdin);
//	for(int i=1;i<=lit;i++)
//	{
//		int v,d,hh,mm;
//		scanf("%d %d %d:%d",&v,&d,&hh,&mm);
//		fflush(stdin);
//		double t,initial;
//		double final;
//		t=double(d)/double(v);
//		t*=60;
//		initial=hh*60+mm;
//		final=initial-t;
//		while(final<0){final+=1440;}
//		int hour;
//		int min;
//		hour=final/60;
//		min=int(final)%60;
//		if(hour>24){hour%=24;}
//		while(hour<0){hour+=24;}
//		while(min<0){min+=60;}
//		
//		printf("Case #%d: %.2d:%.2d\n",i,hour,min);
//
//	}
//
//	getchar();
//	return 0;
//}