#include<stdio.h>

void inverte(int v[], int tamanho){
	int i, troca;
	if(tamanho != 1){
		for( i=0; i<(tamanho/2); i++){
        	troca=v[i];
        	v[i]=v[tamanho-1-i];
        	v[tamanho-1-i]=troca;
    	}
	}
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
    inverte(v,tamanho);
    
    //imprime--------------------------------------
    for(i=0;i<tamanho;i++){
    	printf ("%d,",v[i]);
	}
    return 0;
}
