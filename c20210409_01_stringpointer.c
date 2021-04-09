#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//문자열의 포인터
	//char str[] = "happy"; //null문자까지 
	////str = "angry"; // str은 상수이기때문에 변경불가
	//char* p = str;
	//printf("%s", p);
	//p = "python"; //p는 변수로 다른애를 가리킬 수 있음.
	//puts(p); //문자열 전용함수

	//실습)이름을 1개 입력받고 출력
	char name[10];
	char* p = name;
	while (1) {
		printf("이름은? ");
		gets_s(p, sizeof(name));
		if (name[0] == 'q') break;
		//puts(p);
		//printf("님 환영합니다.\n");
		printf("%s님 환영합니다.\n", p);
		printf("-----------------------\n", p);
	}
	return 0;
}