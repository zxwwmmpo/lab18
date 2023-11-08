#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Кобин Владимир\n");
	printf("задача 2\n");

	int a, b, c, p;

	FILE* fin = fopen("C:\\Users\\vkobi\\OneDrive\\Desktop\\lab_18\\in2.txt", "rt");
	if (fin == NULL) {
		printf("входной файл не найден");
		return;
	}
	fscanf(fin, "%d%d%d", &a, &b, &c);
	fclose(fin);

	printf("ввели числа: %d, %d, %d\n", a, b, c);
	p = a * b * c;
	printf("p = %d", p);

	FILE* fout = fopen("C:\\Users\\vkobi\\OneDrive\\Desktop\\lab_18\\out2.txt", "wt");
	if (fout == NULL) {
		printf("выходной файл не создался");
		return;
	}
	fprintf(fout, "%d", p);
	fclose(fout);
}