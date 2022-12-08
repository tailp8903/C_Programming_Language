#include<stdio.h>

int main(){
	char c;
	char x[100];
	int index = 0;
	int dot = 0;
	while((c = getchar()) != '\n'){
		x[index] = c;
		if (c == '.') dot = index;
		index++;
	}
	printf("The integer part: ");
	for (int i = 0; i < dot; i++){
		printf("%c", x[i]);
	}
	printf("\nThe fraction part: ");
	for (int i = dot + 1; i < index; i++){
		printf("%c", x[i]);
	}
	return 0;
}