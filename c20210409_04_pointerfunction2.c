#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void arrPrint(int argc, char* argv[]) {
	for (int i = 0; i < argc; i++) {
	printf("%s\n", argv[i]);
	}
}

int main(int argc, char*argv[]) {
	//이차 문자열 배열의 매개변수
	//포인터의 배열//포인터가 3개라는 뜻
	//char* p[3] = { "python", "c", "java" }; 
	//printf("%d %d %d\n", p[0], p[1], p[2]);

	//다차원 배열의 포인터
	//char arr[][7] = { "python", "c", "java" };
	//char* (*p)[7] = arr;
	//printf("%d %d %d\n", p, p+1, p+2); //>7바이트 간격
	

	char* p[3] = { "python", "c", "java" }; 
	printf("%d %d %d\n", p[0], p[1], p[2]);

	//함수로 처리
	//for (int i = 0; i < 3; i++) {
	//	printf("%s\n", p[i]); //%s문자열은 주소로 찍어주기!
	//}

	arrPrint(3, p);

	return 0;
}