#include <stdio.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("����� ��������\n");
	printf("������ 1\n");

	int a, b, c, p;
	printf("������� 3 �����: ");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("�����: %d, %d, %d\n", a, b, c);
	p = a * b * c;
	printf("�� ������������ p = %d", p);
}