#include "DataStructure.h"
#include <stdio.h>

// �迭 ��� : ��� ���󰡸鼭 ���
void printArray(NODE *head)
{
	NODE *p = head->next;
	if (p != NULL)
	{
		while (p != NULL)
		{
			fputs(p->data, stdout);
			fputs(" ", stdout);
			p = p->next;
		}
		puts("");
	}
	else
		puts("Array is empty");
}