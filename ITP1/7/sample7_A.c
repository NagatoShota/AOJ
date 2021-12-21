#include <stdio.h>

int main(){
    int m,f,r,t; //中間テストm,期末テストf,再試験r
    char x[100];
    t = 0;

    while(1){
        scanf("%d %d %d",&m,&f,&r);
        if( (m == -1 || f == -1) || (m + f < 30) ){
            x[t] = 'F';
        }else if(m + f >= 80){
            x[t] = 'A';
        }else if(m + f >=65 && m + f <80){
            x[t] = 'B';
        }else if(m + f >=50 && m + f <65){
            x[t] = 'C';
        }else if(m + f >=30 && m + f <50 && r >= 50){
            x[t] = 'C';
        }else if(m + f >=30 && m + f <50 && r < 50){
            x[t] = 'D';
        }
        if(m == -1 && f == -1 && r == -1) break;
        t++;
    }

    for(int i=0;i<t;i++){
        printf("%c\n",x[i]);
    }
    return 0;

}