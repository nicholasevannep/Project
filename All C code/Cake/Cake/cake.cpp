#include <stdio.h>
#include<std
int main(){
    int a;
    scanf("%d",&a);fflush(stdin);
    for(int b=1;b<=a;b++){
        int h[20]={},i=0,y[20]={},c,d;
        bool z[20][20]={};
        char g[20][20]={};
        scanf("%d %d",&c,&d);fflush(stdin);
        for(int e=1;e<=c;e++){
            for(int f=1;f<=d;e++){
                scanf("%c",&g[e][f]);
            }fflush(stdin);
        }
        for(int e=1;e<=c;e++){
            for(int f=1;f<=d;f++){
                if(g[e][f]=='.'){
                    h[e]=h[e]+1;
                    y[f]=y[f]+1;
                }
                if(h[e]==d){
                    for(f=1;f<=d;f++)
                        z[e][f]=1;
                }
                if(y[f]==c){
                    for(e=1;e<=c;e++)
                        z[e][f]=1;
                }
            }
        }
        for(int e=1;e<=c;e++){
            for(int f=1;f<=d;f++){
                if(z[e][f]==1)
                    i++;
            }
        }
        printf("Case #%d: %d\n",b,i);
    }
    return 0;
}