#include <stdio.h>

char* mes(int a){
	if(a==1) return "Janeiro";
	if(a==2) return "Fevereiro";
	if(a==3) return "Abril";
	else return "Valor Invalido";
};

void main(){
    int x;
    scanf("%d",&x);
	printf("%s\n",mes(x));
}
