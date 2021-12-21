#include <stdio.h>

int main(){
    int r,c,i,j,sumr,sumc,sumrc; //行数r列数c
    int x[101][101];

    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&x[i][j]);
        }
    }

    for(i=0;i<r;i++){
        sumr=0;
        for(j=0;j<c;j++){
            printf("%d ",x[i][j]);
            sumr = sumr + x[i][j];
        }

        printf("%d\n",sumr);
    }
    sumrc=0;
    for(i=0;i<c;i++){
        sumc=0;
        for(j=0;j<r;j++){
            sumc = sumc + x[j][i];
        }
        sumrc = sumrc + sumc;
        printf("%d ",sumc);
    }
    printf("%d\n",sumrc);
    return 0;
}