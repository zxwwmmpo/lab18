#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Кобин Владимир\n");
	printf("задача 4\n");

	int a, b, c, d, e, s;

	FILE* fin = fopen("C:\\Users\\vkobi\\OneDrive\\Desktop\\lab_18\\in4.txt", "rt");
	if (fin == NULL) {
		printf("входной файл не найден");
		return;
	}
	fscanf(fin, "%d%d%d%d%d", &a, &b, &c, &d, &e);
	fclose(fin);

	printf("ввели числа: %d, %d, %d, %d, %d\n", a, b, c, d, e);
	s = a + b + c + d + e;
	printf("s = %d", s);

	FILE* fout = fopen("C:\\Users\\vkobi\\OneDrive\\Desktop\\lab_18\\out4.txt", "wt");
	if (fout == NULL) {
		printf("выходной файл не создался");
		return;
	}
	fprintf(fout, "%d", s);
	fclose(fout);
}