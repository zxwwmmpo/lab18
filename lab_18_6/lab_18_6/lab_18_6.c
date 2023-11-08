#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Кобин Владимир\n");
	printf("задача 5\n");

	int a[10];
	int i, n;

	FILE* fin = fopen("C:\\Users\\vkobi\\OneDrive\\Desktop\\lab_18\\in6.txt", "rt");
	if (fin == NULL) {
		printf("входной файл не найден");
		return;
	}
	fscanf(fin, "%d", &n);

	for (i = 0; i < n; i++) { fscanf(fin, "%d", &a[i]); }

	fclose(fin);

	printf("ввели массив a[%d] = ", n);
	for (i = 0; i < n; i++) { printf("%d ", a[i]); }

	int s = 0;
	for (i = 0; i < n; i++) { s += a[i]; }

	float sa = (float)s / n;

	printf("\nsa = %f\n", sa);

	for (i = 0; i < n; i++) {
		if ((a[i] < sa) && (a[i]%2==0)) {
			a[i] /= 2;
		}
	}

	printf("ввели массив a[%d] = ", n);
	for (i = 0; i < n; i++) { printf("%d ", a[i]); }


	FILE* fout = fopen("C:\\Users\\vkobi\\OneDrive\\Desktop\\lab_18\\out6.txt", "wt");
	if (fout == NULL) {
		printf("выходной файл не создался");
		return;
	}
	fprintf(fout, "%d\n", n);
	for (i = 0; i < n; i++) { fprintf(fout, "%d ", a[i]); }
	fclose(fout);
}