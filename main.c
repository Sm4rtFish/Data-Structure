#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "DataStructure.h"

unsigned int top = 0; // 현재 노드 갯수
extern void inputData(NODE *head, char *input);
extern void printArray(NODE *head);
extern void pop(NODE *head);
extern void freeStack(NODE *head);
extern void deQ(NODE *head);
extern void freeQ(NODE *head);

// 실행
int main(void)
{
	char type; // 자료구조 타입 저장 변수
	char choice; // 메뉴 선택 저장 변수
	char data[MAX_DATA_LENGTH]; // 데이터 저장 변수

	NODE *head = (NODE *)malloc(sizeof(NODE)); // 헤드 생성
	head->next = NULL; // 처음에 헤드가 가리키는 곳은 NULL이다

START: // 도입부
	puts("Select data structure type >>  1 : Stack  2 : Queue  3 : Exit"); // 자료구조 타입 설정
	type = _getch(); // 자료구조 타입 입력

	switch (type) // 타입 입력 후 타입에 맞는 메뉴 출력
	{
	case '1':
	case '2':
		break;
	case '3': // 종료
		puts("bye~");
		goto FINISH; // main.c 74번째 줄
	default: // 무효 값은 다시 입력하게 함
		puts("Invalid command");
		goto START; // main.c 25번째 줄
	}

	while (1) // 메뉴 선택부
	{
		puts("1 : Insert node  2: Delete node  3 : Print  4 : Exit"); // 메뉴 선택 창 출력
		choice = _getch(); // 메뉴 입력
		switch (choice)
		{
		case '1': // 노드 생성 및 데이터 삽입
			fputs("value : ", stdout);
			gets_s(data, sizeof(data));
			if (strlen(data) < MAX_DATA_LENGTH)
				inputData(head, data);
			else
				puts("Input value is too long");
			break;
		case '2': // 노드 삭제
			if (type == '1')
				pop(head);
			else
				deQ(head);
			break;
		case '3': // 현재 상태 출력
			printArray(head);
			break;
		case '4': // 종료
			puts("bye~");
			goto FINISH; // main.c 74번째 줄
		default:
			puts("Invalid command");
			break;
		}
	}

FINISH: // 끝
	if (type == '1')  // 메모리 해제
		freeStack(head);
	else
		freeQ(head);
	free(head);
	return 0;
}