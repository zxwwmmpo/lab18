#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Кобин Владимир\n");
	printf("задача 3\n");

	int a, b, c, d, e, s;
	printf("введите 5 чисел: ");
	scanf_s("%d%d%d%d%d", &a, &b, &c, &d, &e);
	printf("ввели: %d, %d, %d, %d, %d\n", a, b, c, d, e);
	s = a + b + c + d + e;
	printf("их сумма s = %d", s);
}