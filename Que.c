// �ܹ��� ���Ḯ��Ʈ�� ���� ť                ���� ���� : 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "DataStructure.h"

extern int top;

// Dequeue : ���� �����ִ� ��� ����
void deQ(NODE *head)
{
	NODE *temp = head->next;
	NODE *prev = head;
	int i;

	if (temp != NULL)
	{
		for (i = 0; i < top; i++)
		{
			if (temp->next == NULL)
			{
				prev->next = NULL;
				free(temp);
				top -= 1;
			}
			else
			{
				prev = temp;
				temp = temp->next;
			}
		}
	}
	else
		puts("Underflow detected");
}

// ť ���� : ��� ���󰡸鼭 ��ť ��Ŵ
void freeQ(NODE *head)
{
	while (head->next != NULL)
		deQ(head);
}