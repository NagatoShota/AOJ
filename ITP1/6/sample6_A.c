//Reversing Numbers
//与えられた数列を逆順に出力するプログラムを作成して下さい。
// Input
// n は数列の長さを示し、ai は i 番目の数を表します。
// Output
// 逆順の数列を１行に出力して下さい。数列の要素の間に１つの空白を入れて下さい（最後の数の後に空白は入らないことに注意して下さい）。




#include <stdio.h>

int main(){
    int a[100];
    int n,i;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=n-1;i>=0;i--){
        printf("%d",a[i]);
        if(i!=0){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}