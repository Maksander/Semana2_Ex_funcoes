#include <stdio.h>

int maior_numero(int a, int b){
    return (a > b) ? a : b;
};

void main(){
    int x,y;
    scanf("%d",&x); //"&"operandor de extração de endereço
    scanf("%d",&y);
    int r = maior_numero(x,y);
    printf("%d\n",r);
}
