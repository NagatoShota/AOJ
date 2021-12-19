#include <stdio.h>

int main(){
    int n,m,i,j,s; //行n列m
    int a[101][101];
    int b[101];

    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    for(j=0;j<n;j++){
        s=0;
        for(i=0;i<m;i++){
            s += a[j][i]*b[i];
        }
        printf("%d\n",s);
    }
    return 0;    
        
}