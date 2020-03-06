#include <stdio.h>

//procedimento
float cacula_e_exibe_media_ponderada(float n1,float n2,float n3,int p1,int p2,int p3){
	return (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);
};


//fun��o
int main(){
	float resultado = cacula_e_exibe_media_ponderada(7, 7.5, 9, 1, 2, 3);
    printf("Resultado: %.2f\n", resultado);
	return 0;
}
