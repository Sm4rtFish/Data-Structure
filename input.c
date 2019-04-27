#include "DataStructure.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

extern int top;

// inputData : 새 노드를 만들고 헤드가 그 노드를 가리키게 함
void inputData(NODE *head, char *input)
{
	if (top < MAX_SIZE_OF_ARRAY)
	{
		NODE *new_array = (NODE *)malloc(sizeof(NODE));
		strcpy_s(new_array->data, MAX_DATA_LENGTH, input);
		new_array->next = head->next;
		head->next = new_array;
		top += 1;
	}
	else
		puts("Overflow detected");
}