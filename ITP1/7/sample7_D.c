// 行列の積


#include <stdio.h>

int main(){
    int n,m,l,i,j,k; //n行m列の行列A、m行l列の行列B
    int x[100][100];
    int y[100][100];
    long int xy[100][100]={0};
    scanf("%d %d %d",&n,&m,&l);

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<l;j++){
            scanf("%d",&y[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            for(k=0;k<m;k++){
                xy[i][j] += x[i][k] * y[k][j];
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            printf("%ld",xy[i][j]);
            if(j!=l-1)printf(" ");
        }
        printf("\n");
    }

    return 0;
}

