#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("����� ��������\n");
	printf("������ 3\n");

	int a, b, c, d, e, s;
	printf("������� 5 �����: ");
	scanf_s("%d%d%d%d%d", &a, &b, &c, &d, &e);
	printf("�����: %d, %d, %d, %d, %d\n", a, b, c, d, e);
	s = a + b + c + d + e;
	printf("�� ����� s = %d", s);
}