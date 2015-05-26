/*Ввести промежуток чисел.
Вывести этот промежуток, затем числа кратные заданному числу.*/
/*
#include<stdio.h>
#include<iostream>
#include<conio.h>

void cycle(int a, int n);
void out();

void main(){
	setlocale(LC_ALL, "Russian");
	int a;
	int n;
	printf("Введите первое число:\n");
	scanf("%d", &a);
	printf("Введите второе число:\n");
	scanf("%d", &n);
	((n - a) <= 100) ? cycle(a, n) : out();
	
	printf("\n");
	getch();
}

void cycle(int a, int n) {
	int arr1[100];
	int arr2[100];
	int i;
	int k = 0;
	int j = 0;
	int c;
	printf("Введите кратное число:\n");
	scanf("%d", &c);
	for (i = a; i < n; i++) {
		arr1[j] = i;
		if (arr1[j] % c == 0) {
			arr2[k] = arr1[j];
			k++;
		}
		j++;
	}
	for (i = 0; i < j; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n\n");
	for (i = 0; i < k; i++) {
		printf("%d ", arr2[i]);
	}
}

void out() {
	printf("Промежуток больше ста!");
}*/
#include<stdio.h>
#include<iostream>
#include<conio.h>

//const int N = 10;

int main() {
	setlocale(LC_ALL, "Russian");
	int n, x, y, sum;
	FILE *fin, *fout;

	fin = fopen("input.txt", "r");
	fout = fopen("output.txt", "w");

	if (fin == NULL) {
		printf("Нет файла данных");
		return 1;
	}

	while (1) {
		n = fscanf(fin, "%d%d", &x, &y);
		if (n < 2) break;
		sum = x + y;
		fprintf(fout, "%d\n", sum);
	}
	fclose(fin);
	fclose(fout);
}

/*#include<stdio.h>
#include<iostream>
#include<conio.h>

int main() {
	setlocale(LC_ALL, "Russian");
	FILE *fin, *fout;
	char ch1[10], ch2[10];
	int i;

	fin = fopen("input.txt", "r");
	fout = fopen("output.txt", "w");

	if (fin == NULL) {
		printf("Нет файла данных");
		return 1;
	}

	while (fgets(ch1, 10, fin) != NULL) {
		if (ch2 != ){
		if(strcmp(ch1, ch2) > 0
		if (fgets(ch2, 10, fin) != NULL) {
			if (strcmp(ch1, ch2) > 0
			}
		}
		fprintf(fout, "%s", ch);
	}
	fclose(fin);
	fclose(fout);
}*/