// 단방향 연결리스트로 만든 스택
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "DataStructure.h"

extern int top;

// pop : 헤드를 헤드가 가리키던 노드의 다음 노드를 가리키게 하고 처음에 가리켰던 곳은 삭제
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

// 스택 삭제 : 헤드 따라가면서 팝 시킴
void freeStack(NODE *head)
{
	while (head->next != NULL)
		pop(head);
}
