#include "main.h"
#define NUM 10 //�迭�� ������� ��ũ�λ�� �̿�, ���� ���� ����


int main(void) {

	printArray(AppData());
	
	fgetc(stdin);
	return 0;
}

//�迭�� ���� ����ִ� AppData()�Լ�
char* AppData() {
	static char arr[NUM];
	for (int i = 0; i < NUM; i++)
	{
		arr[i] = NULL;
	}

	for (int i = 0; i < NUM; i++)
	{
		char c = 0;
		printf("a~c ���� �Է����ּ���. �� �ܸ� �Է��ϸ� ���α׷��� ����˴ϴ�.\n");

		fseek(stdin, 0, SEEK_END);
		scanf_s("%c", &c);

		if (c == 'c' or c == 'b' or c == 'a')
		{
			arr[i] = c;
		}
		else break;
	}
	return arr;
}


//�迭�� ���� ����ϴ� printArray()�Լ�.
void printArray(char arr[]) {
	printf("���α׷� ����! ���α׷� �Է� ������ ������ �����ϴ�.\n\n");
	for (int i = 0; i < NUM; i++)
	{
		if (arr[i] != NULL)
		{
			printf("array[%d] ==> %c\n\n", i, arr[i]);
		}
		else break;
	}
}