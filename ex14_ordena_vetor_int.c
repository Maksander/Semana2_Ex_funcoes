#include<stdio.h>

void ordena_vetor_int_decrescente(int *v, int tamanho){
	int i;
	char troca;
	for(i=0; i<tamanho-1; i++){
		if(v[i+1]>v[i]){
    		troca=v[i];
    		v[i]=v[i+1];
    		v[i+1]=troca;
    		i=-1;
    	}
	}
};

int main (){
	int tamanho=5;
    int v[tamanho];
    int i;
    //popula V-------------------------------------
    for( i=0; i<tamanho; i++){
        printf("Digite %d valor\n", i+1);
        scanf("%d",&v[i]); 
    }
    //função --------------------------------------
    ordena_vetor_int_decrescente(v,tamanho);
    //imprime--------------------------------------
    for(i=0;i<tamanho;i++)printf ("%d%s",v[i],i<tamanho-1?",":"");
    return 0;
}
