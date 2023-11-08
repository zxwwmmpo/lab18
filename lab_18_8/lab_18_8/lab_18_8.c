#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

#define NUM_ELEMENTS 10

int arr[NUM_ELEMENTS];
int n = 0;

void printElements() {
	printf("< ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf(" >\n");
}

void keyboardInput() {
	printf("n = ");
	scanf_s("%d", &n);

	printf("input %d values: ", n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
}

void oddsX10() {
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			arr[i] = arr[i] * 10;
		}
	}
}

int findMin() {
	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}return min;
}

void multiply() {
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			arr[i] = arr[i] * -1;
		}
	}
}

void replace() {
	for (int i = 0; i < n; i++) {
		if (arr[i] < 4) {
			arr[i] = 4;
		}
	}
}

void deleteElement(int delIndex) {
	for (int i = delIndex; i < n - 1; i++) {
		arr[i] = arr[i + 1];
	}
	n--;
}

void insertElement(int insIndex, int value) {
	for (int i = n; i > insIndex; i--) {
		arr[i] = arr[i - 1];
	}
	n++;
	arr[insIndex] = value;
}

void lab18() {
	FILE* fin = fopen("C:\\Users\\vkobi\\OneDrive\\Desktop\\lab_18\\in8.txt", "rt");
	if (fin == NULL) {
		printf("������� ���� �� ������");
		return;
	}
	fscanf(fin, "%d", &n);

	for (int i = 0; i < n; i++) { fscanf(fin, "%d", &arr[i]); }

	fclose(fin);
}



void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int item;
	do {
		printf("\n");
		printf("------------------------------\n");
		printf("���������� �������:");
		printElements();
		printf("�������� ������ ��� ��������:\n");
		printf("1: ������ � ���������� ������\n");
		printf("2: x10 ��� ���� �������� ���������\n");
		printf("3: ����� ����������� �������\n");
		printf("4: ��� ������ �������� ������� �������� �� -1\n");
		printf("5: ��� �������� ������� ������� �������� ������ 4 �������� �� 4\n");
		printf("6: ������� �������� �������\n");
		printf("7: �������� ����� ������� � �������� �����\n");
		printf("8: ������� ����������� �������\n");
		printf("9: ����� ����������� ��������� ��������� 0\n");
		printf("\n");
		printf("10: ��������� ������ � �����\n");
		printf("\n");
		printf("0: ����� �� ���������\n");
		printf("��������� �������� >>>>>> ");

		scanf_s("%d", &item);

		switch (item) {
		case 1:
			keyboardInput();
			break;
		case 2:
			oddsX10();
			break;
		case 3:
		{
			int min = findMin();
			printf("min = % d\n", min);
		}
		break;
		case 4:
			multiply();
			break;
		case 5:
			replace();
			break;
		case 6:
		{
			printf("index: ");
			int index;
			scanf_s("%d", &index);

			deleteElement(index);
		}
		break;
		case 7:
			printf("����� ����� ��������� ����� �������� �����? ������: ");
			int index;
			scanf_s("%d", &index);

			printf("��������, ������� ����� ��������: ");
			int value;
			scanf_s("%d", &value);

			insertElement(index, value);
		case 8:
		{
			int min = findMin();
			printf("min = %d\n", min);

			deleteElement(min);
		}
		break;
		case 9:
		{
			int indexMin = findMin();
			printf("������ ������������ �����: %d\n", indexMin);

			insertElement(indexMin, 0);
		}
		break;
		case 10:
			lab18();
			break;
		}

	} while (item != 0);

}
