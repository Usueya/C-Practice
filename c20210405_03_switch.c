#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//선택조건문 : switch ~ case
	//중괄호의 역할이 시작과 끝을 뜻함
	//int a = 2;
	//switch (a) {
	//case 0: 
	//	printf("zero\n"); break;
	//case 1: 
	//	printf("one\n"); break;
	//case 2:
	//	printf("two\n"); break;
	//default:
	//	printf("잘못된 숫자");
	//}

	//월의 마지막을 출력하세요
	//int month = 4;
	//switch (month) {
	//case 1: 
	//case 3:
	//case 5:
	//case 7:
	//case 8:
	//case 10:
	//case 12:
	//	printf("31일"); break;
	//case 2:
	//	printf("28일"); break;
	//case 4:
	//case 6:
	//case 9:
	//case 11:
	//	printf("30일"); break;
	//default:
	//	printf("잘못된 숫자");
	//}

	//메뉴판 문제 switch로 바꾸기

	int  a;
	printf("********************\n");
	printf("1.자장면, 2.짬뽕\n3.설렁탕, 4.비빔밥\n5.피자, 6.스파게티\n********************\n메뉴를선택하세요.");
	scanf("%d", &a);

	switch (a) {
	case 1:
	case 2:
		printf("중식코너\n"); break;
	case 3:
	case 4:
		printf("한식코너\n"); break;
	case 5:
	case 6:
		printf("양식코너\n"); break;
	default:
		printf("잘못된 숫자\n"); break;
	}
	return 0;

}