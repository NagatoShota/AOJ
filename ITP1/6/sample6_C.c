// Ａ大学は１フロア１０部屋、３階建ての公舎４棟を管理しています。公舎の入居・退去の情報を読み込み、各部屋の入居者数を出力するプログラムを作成して下さい。

// n件の情報が与えられます。各情報では、４つの整数b, f, r, vが与えられます。これは、b棟f階のr番目の部屋にv人が追加で入居したことを示します。vが負の値の場合、-v人退去したことを示します。

// 最初、全ての部屋には誰も入居していないものとします。



#include <stdio.h>

int main(){
    int count[4][3][10]={0};
    int n,b,f,r,v;//b棟f階r番目の部屋にv人 [階][部屋][棟]
    int i,j,k;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d %d",&b,&f,&r,&v);
        // if((b<0 || 4<b) || (f<0 || 3<f) || (r<0 || 10<r)){
        //     printf("正しい数値を入力してください\n");
        //     return 0;
        // }
        count[b-1][f-1][r-1] += v;
        // if(count[b-1][f-1][r-1] < 0 || 9 < count[b-1][f-1][r-1]){
        //     printf("正しい数値を入力してください\n");
            // return 0;
        // }
    }

    for(k=0;k<4;k++){
        for(j=0;j<3;j++){
            for(i=0;i<10;i++){
                printf(" %d",count[k][j][i]);
            }
            printf("\n");
        }
        if(k!=3){
            printf("####################\n");
        }
    }
    return 0;
}