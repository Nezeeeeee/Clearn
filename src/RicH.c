#include <stdio.h>


int main(){
	int i,c;
	int indigit[93];

	for(i = 0; i<93; i++){
		indigit[i] = 0;
	}

	while((c = getchar()) != EOF){
		if(c > 32 && c < 127)
		++indigit[c - 33];
	}

	printf("Счетчик символов:\n");

	for(i= 0; i < 93; i++){
		if(indigit[i] > 9)
			printf("%c  ", i+33);
		else
			printf("%c ", i+33);
	}

	printf("\n");

	for(i = 0; i < 93; i++){
		printf("%d ", indigit[i]);
	}

	printf("Конец программы!");
}
