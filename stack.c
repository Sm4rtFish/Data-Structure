// �ܹ��� ���Ḯ��Ʈ�� ���� ����
#include <stdio.h>
#include <string.h>
#include "DataStructure.h"

extern int top;

// pop : ��带 ��尡 ����Ű�� ����� ���� ��带 ����Ű�� �ϰ� ó���� �����״� ���� ����
void pop(NODE *head)
{
	NODE *temp = head->next;
	if (temp != NULL)
	{
		head->next = head->next->next;
		free(temp);
		top -= 1;
	}
	else
		puts("Underflow detected");
}

// ���� ���� : ��� ���󰡸鼭 �� ��Ŵ
void freeStack(NODE *head)
{
	while (head->next != NULL)
		pop(head);
}