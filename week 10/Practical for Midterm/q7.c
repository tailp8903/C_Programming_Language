#include<stdio.h>
#include<string.h>

int main(){
	int len;
	char s[20];
	do{
		printf("Enter string has length n (5 < n < 20)\n");
		scanf("%s", s);
		len = strlen(s);
	}while(len <= 5 || len >= 20);
	int left = len / 2 - 2;
	for (int i = left; i <= left + 4; i++){
		printf("%c", s[i]);
	}

	return 0;
}