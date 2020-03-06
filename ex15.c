#include<stdio.h>

int contem(int v[],int n, int e){
	int i=0;
	for (i=0;i<n;i++) if(v[i] == e ) return 1;
	return 0;
};

int calcula_vetor_c(int A[],int nA,int B[],int nB,int C[],int nC){
	//C é uma bag
	int qtdeC=0;
	int i;
	for (i=0;i<nA;i++)
		if(!contem (C,nA,A[i]))
			C[qtdeC++] = A[i];
	for (i=0;i<nB;i++)
		if(!contem (C,nB,B[i]))
			C[qtdeC++] = B[i];
	
};


int main(){
	
	int v1[]={1,2,4,3,1};
	int v2[]={1,1,1,1,2};
	int C[10];
	int tamanho = calcula_vetor_c (v1,5,v2,5,C,10);
	int i;
	for(i=0;i<tamanho-1;i++)printf ("%d\n",C[i]);
	return 0;
}
