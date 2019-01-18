#include <stdio.h>
struct  stru{
    int yuwei;
    int shuxue;
    int yingyu;
};

int main(){
    
    int index = 0;
    printf("xueshengchenjiguanlixitong\n");
    while(1){
        printf("1---tianjiaxueshengchenji\n");
        printf("2---shanchuxueshengchenji\n");
        printf("3---suoyouxueshengchenji\n");
      
        printf("qingshuxuxuanzedegongnengbianhao\n");
        int code;
        scanf("%d",&code);
      
        if(code == 1){
            printf("qingshuruyaotianjiadexueshengchenji :\n");
            char m;
            scanf("%c",&m);
             scanf("%c",&m);
            
            index++;
            printf("tianjiachenggong\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);

          }
           if(code == 2){
               printf("shurushanchudexueshengchenji :\n");
               char m;
               scanf("%c",&m);
                 scanf("%c",&m);

                 index--;
                 printf("shanchuchenggong\n");
                 char x;
                 scanf("%c",&x);
                  scanf("%c",&x);
          }
           if(code == 3){
          
          }
         
    }
    return 0;
}