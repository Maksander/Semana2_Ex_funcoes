#include <stdio.h>

int diferentes(int a, int b){
	
    return (a != b) ? 1 : 0;
};

void main(){
    int x,y,r;
    do{
    	scanf("%d",&x);
    	scanf("%d",&y);
	}while(!diferentes(x,y));
	printf("%d\n",r);
}
