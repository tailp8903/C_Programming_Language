#include<stdio.h>
#include<string.h>

char s[100], x, y;

void input(){
	scanf("%s %c %c", s, &x, &y);
}

void output(){
	printf("%s", s);
}

void replace(){
	input();
	for (int i = 0; i < strlen(s); i++){
		if (s[i] == x) s[i] = y;
	}
	output();
}

int main(){
	replace();

	return 0;
}