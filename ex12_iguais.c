#include<stdio.h>

int iguais(int v[], int tamanho){
	int i,j;
	if(tamanho != 1){
		for( i=0; i<tamanho; i++){
        	for( j=0; j<tamanho; j++){
        		if( i!=j && v[i]==v[j] )return 1;
    		}
    	}
	}
	return 0;
};

int main (){
	int tamanho=5;
    int v[tamanho];
    int i;
    //popula --------------------------------------
    for( i=0; i<tamanho; i++){
        printf("Digite %d valor\n", i+1);
        scanf("%d",&v[i]);
    }
    //função --------------------------------------
    //imprime--------------------------------------
    printf("%s",iguais(v,tamanho)?"Verdadeiro":"Falso");
    return 0;
}
