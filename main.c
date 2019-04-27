#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "DataStructure.h"

unsigned int top = 0; // ���� ��� ����
extern void inputData(NODE *head, char *input);
extern void printArray(NODE *head);
extern void pop(NODE *head);
extern void freeStack(NODE *head);
extern void deQ(NODE *head);
extern void freeQ(NODE *head);

// ����
int main(void)
{
	char type; // �ڷᱸ�� Ÿ�� ���� ����
	char choice; // �޴� ���� ���� ����
	char data[MAX_DATA_LENGTH]; // ������ ���� ����

	NODE *head = (NODE *)malloc(sizeof(NODE)); // ��� ����
	head->next = NULL; // ó���� ��尡 ����Ű�� ���� NULL�̴�

START: // ���Ժ�
	puts("Select data structure type >>  1 : Stack  2 : Queue  3 : Exit"); // �ڷᱸ�� Ÿ�� ����
	type = _getch(); // �ڷᱸ�� Ÿ�� �Է�

	switch (type) // Ÿ�� �Է� �� Ÿ�Կ� �´� �޴� ���
	{
	case '1':
	case '2':
		break;
	case '3': // ����
		puts("bye~");
		goto FINISH; // main.c 74��° ��
	default: // ��ȿ ���� �ٽ� �Է��ϰ� ��
		puts("Invalid command");
		goto START; // main.c 25��° ��
	}

	while (1) // �޴� ���ú�
	{
		puts("1 : Insert node  2: Delete node  3 : Print  4 : Exit"); // �޴� ���� â ���
		choice = _getch(); // �޴� �Է�
		switch (choice)
		{
		case '1': // ��� ���� �� ������ ����
			fputs("value : ", stdout);
			gets_s(data, sizeof(data));
			if (strlen(data) < MAX_DATA_LENGTH)
				inputData(head, data);
			else
				puts("Input value is too long");
			break;
		case '2': // ��� ����
			if (type == '1')
				pop(head);
			else
				deQ(head);
			break;
		case '3': // ���� ���� ���
			printArray(head);
			break;
		case '4': // ����
			puts("bye~");
			goto FINISH; // main.c 74��° ��
		default:
			puts("Invalid command");
			break;
		}
	}

FINISH: // ��
	if (type == '1')  // �޸� ����
		freeStack(head);
	else
		freeQ(head);
	free(head);
	return 0;
}