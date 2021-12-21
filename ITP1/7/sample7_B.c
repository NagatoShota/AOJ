#include <stdio.h>

int main(){
    int n,x,i,j,k,num,b; //1からnまでの数から重複なしで3つその合計がx
    int a[100];

    b=0;
    while(1){
        scanf("%d %d",&n,&x);
        if(n == 0 && x ==0) break;
        num = 0;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                for(k=1;k<=n;k++){
                    if(i+j+k == x && i<j && j<k){
                        num++;
                    }
                }
            }
        }
        a[b] = num;
        b++;
    }

    for(i=0;i<b;i++){
        printf("%d\n",a[i]);
    }

    return 0;
}