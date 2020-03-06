#include<stdio.h>

void substituir_vetor_char(char *a, char *b,int tamanho){
	int i;
	char troca;
	
	for( i=0; i<tamanho; i++)a[i]=b[i];
};

int main (){
	int tamanho=20;
    char v[tamanho],c[tamanho];
    //popula V-------------------------------------
    printf("\nDigite o primeiro vetor: ");
    scanf("%s",&v);
    //popula C-------------------------------------
    printf("\nDigite o  segundo vetor: ");
    scanf("%s",&c);
    //função --------------------------------------
    substituir_vetor_char(v,c,tamanho);
    //imprime--------------------------------------
    printf ("%s\n",v);
    printf ("%s",c);
    return 0;
}
