#include<stdio.h>

int main(){
	int arr[26] = {};
	char c;
	while((c = getchar()) != '\n'){
		arr[c - 'a'] += 1;
	}
	for (int i = 0; i < 26; i++){
		if (arr[i] != 0){
			printf("The letter \'%c\' appears %d time(s)\n", i + 97, arr[i]);
		}
	}
	return 0;
}