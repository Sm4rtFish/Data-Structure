// 단방향 연결리스트로 만든 큐                남은 과제 : 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "DataStructure.h"

extern int top;

// Dequeue : 가장 오래있던 노드 삭제
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

// 큐 삭제 : 헤드 따라가면서 디큐 시킴
void freeQ(NODE *head)
{
	while (head->next != NULL)
		deQ(head);
}