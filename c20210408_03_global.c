#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//전역변수:프로그램시작시 생성되고 종료시 소멸
//형에 따른 자동초기화(ex, int형:0, char형:null)
//무분별한 선언은 신중, 프로그램의 복잡도 증가!, 메모리 증가!
int g; //전역변수
void test() {
	printf("a: %d\n", a);
	printf("g: %d\n", g);
}

int main() {
	//전역변수{}밖에 : 지역변수{}안에
	//지역변수: 함수가 시작될 때 생성되어 종료될 때 소멸
	int a = 10;//지역변수

	printf("a: %d\n", a);
	printf("g: %d\n", g);

	return 0;
}