#define MAX_SIZE_OF_ARRAY 5 // ���� �ִ� ũ��
#define MAX_DATA_LENGTH 11 // ������ �ִ� ũ��

// ��� : �����Ϳ� ���� ��� ����Ű�� �����͸� ����
typedef struct NODE {
	char data[MAX_DATA_LENGTH];
	struct NODE *next;
}NODE;
