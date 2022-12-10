#include<stdio.h>

int main(){
	int arr[26] = {};
	char a, b, c, d;
	scanf ("%c %c %c %c", &a, &b, &c, &d);
	arr[a - 'a'] += 1;
	arr[b - 'a'] += 1;
	arr[c - 'a'] += 1;
	arr[d - 'a'] += 1;
	for (int i = 0; i < 26; i++){
		if (arr[i] != 0) printf("%c ", i + 97);
	}
	return 0;
}