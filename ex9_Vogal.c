#include<stdio.h>
#include<math.h>

char* vogal(char a){
	if(a == 'a'|| a == 'e'|| a =='i'|| a =='o'|| a =='u') return "Vogal";
	else return "Nao Vogal";
};

void main(){
    char x;
    scanf("%c",&x);
	printf("%s\n",vogal(x));
}


