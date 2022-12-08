#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

typedef struct book_st {
	int book_cd;
	char book_nm[30];
	char author[30];
	int copies;
}bst;

typedef struct date_st {
	int month;
	int day;
	int year;
}dst;

typedef struct tran_st {
	int book_code;
	char tran_type;
	dst tran_dt;
}tst;

bst books[30];
tst trans[30];

void Add(int* num){	
	int check = 1;
	while (check){
		printf("Enter book code: "); scanf("%d", &books[*num].book_cd);
		printf("Enter book_nm: "); scanf("%s", books[*num].book_nm);
		printf("Enter author: "); scanf("%s", books[*num].author);
		printf("Enter number of copies: "); scanf("%d", &books[*num].copies);
		*num++;
		char b;
		printf("Continue (y/n): ");
		scanf("%c", &b);
		if (b != 'y') check = 0; 
	}
	printf("\n");
}

void Record(int* index){
	int check = 1;
	while(check){
		printf("Enter book code: ");scanf("%d", &trans[*index].book_code);
		printf("Enter Issue or Return: "); scanf("%c", &trans[*index].tran_type);
		printf("Enter day, month, year: "); scanf("%d/%d/%d", &trans[*index].tran_dt.day, &trans[*index].tran_dt.month, &trans[*index].tran_dt.year);
		*index++;
		// char b;
		// printf("Continue (y/n): ");
		// scanf("%c", &b);
		// if (b != 'y') check = 0;
	}
	printf("\n");
}

void Sort(int index, int num){
	for (int i = 0; i < num - 1; i++){
		for (int j = i + 1; j < num; j++){
			if (books[i].book_cd > books[j].book_cd){
				bst temp = books[i];
				books[i] = books[j];
				books[j] = temp;
			}
		}
	}
	for (int i = 0; i < num; i++){
		int count = 0;
		for (int j = 0; j < index; j++){
			if (books[i].book_cd == trans[j].book_code) count++;
		}
		printf("Books code %d had %d transactions\n", books[i].book_cd, count);
	}
}

int main(){
	int num = 0;
	int index = 0;
	while(1){
		printf("Select from Menu:\n1. Add book names\n2. Record Issue/Return\n3. Sort Transaction\n4. Exit\n");
		printf("Enter choice: ");
		int choice;
		scanf("%d", &choice);
		if (choice == 1){
			Add(&num);
		}
		else if (choice == 2){
			Record(&index);
		}
		else if (choice == 3){
			Sort(index, num);
		}
		else if (choice == 4){
			printf("Thanks you!\n");
			return 0;
		}
		// switch(choice){
		// 	case 1:
		// 		Add(&num);
		// 		break;
		// 	case 2:
		// 		Record(&index);
		// 		break;
		// 	case 3:
		// 		Sort(index, num);
		// 		break;
		// 	case 4:
		// 		printf("Thanks you!");
		// 		return 0;
		// }
	}
}