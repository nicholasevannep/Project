//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int lit;
//	scanf("%d",&lit);
//	
//	for(int i=1;i<=lit;i++)
//	{
//		char inp[1000]={};
//		int geser;
//		scanf("%d",&geser);
//		geser%=26;
//		getchar();
//		gets(inp);
//		printf("Case #%d: ",i);
//		for(int j=0;j<strlen(inp);j++)
//		{	
//			if(inp[j]>64&&inp[j]<91)
//			{if(inp[j]+geser<91&&inp[j]+geser>64)
//				{printf("%c",inp[j]+geser);}
//				else if(inp[j]+geser>90)
//				{printf("%c",inp[j]+geser-26);}
//				else if(inp[j]+geser<65)
//				{printf("%c",inp[j]+geser+26);}
//				else{}
//			}
//			else if(inp[j]>96&&inp[j]<123)
//			{if(inp[j]+geser<123&&inp[j]+geser>96)
//				{printf("%c",inp[j]+geser);}
//				else if(inp[j]+geser>122)
//				{printf("%c",inp[j]+geser-26);}
//				else if(inp[j]+geser<97)
//				{printf("%c",inp[j]+geser+26);}
//				else{}
//			}
//			else {printf("%c",inp[j]);}
//		}
//		printf("\n");
//	}
//	getchar();
//	return 0;
//}