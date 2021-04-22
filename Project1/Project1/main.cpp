#include "main.h"
#define NUM 10 //배열의 사이즈는 매크로상수 이용, 추후 변경 가능


int main(void) {

	printArray(AppData());
	
	fgetc(stdin);
	return 0;
}

//배열에 값을 집어넣는 AppData()함수
char* AppData() {
	static char arr[NUM];
	for (int i = 0; i < NUM; i++)
	{
		arr[i] = NULL;
	}

	for (int i = 0; i < NUM; i++)
	{
		char c = 0;
		printf("a~c 값을 입력해주세요. 그 외를 입력하면 프로그램이 종료됩니다.\n");

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


//배열에 값을 출력하는 printArray()함수.
void printArray(char arr[]) {
	printf("프로그램 종료! 프로그램 입력 순서는 다음과 같습니다.\n\n");
	for (int i = 0; i < NUM; i++)
	{
		if (arr[i] != NULL)
		{
			printf("array[%d] ==> %c\n\n", i, arr[i]);
		}
		else break;
	}
}