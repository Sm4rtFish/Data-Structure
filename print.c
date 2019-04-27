#include "DataStructure.h"
#include <stdio.h>

// 배열 출력 : 헤드 따라가면서 출력
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