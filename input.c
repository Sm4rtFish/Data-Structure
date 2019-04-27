#include "DataStructure.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

extern int top;

// inputData : �� ��带 ����� ��尡 �� ��带 ����Ű�� ��
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