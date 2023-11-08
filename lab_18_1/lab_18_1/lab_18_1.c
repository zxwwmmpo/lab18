#include <stdio.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Кобин Владимир\n");
	printf("задача 1\n");

	int a, b, c, p;
	printf("введите 3 числа: ");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("ввели: %d, %d, %d\n", a, b, c);
	p = a * b * c;
	printf("их произведение p = %d", p);
}