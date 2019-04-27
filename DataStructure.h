#define MAX_SIZE_OF_ARRAY 5 // 스택 최대 크기
#define MAX_DATA_LENGTH 11 // 데이터 최대 크기

// 노드 : 데이터와 다음 노드 가리키는 포인터를 가짐
typedef struct NODE {
	char data[MAX_DATA_LENGTH];
	struct NODE *next;
}NODE;
