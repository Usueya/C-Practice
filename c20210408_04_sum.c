#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//함수1) userSum
//매개변수로 정수를 입력, 누적하는 함수
//전역변수와 지역변수가 같을 경우, 지역변수가 우선!
int userSum(int a) {
	static int sum = 0; 
	//static 변수
	//함수가 최초로 실행되었을 때 생성되어 프로그램 종료시 소멸
	//선언된 함수안에서만 접근가능
	//스택(stack)메모리 구조: FILO(First In, Last Out)
	//static메모리 : 공간이 별도생성되어 함수안에서만
	sum = sum + a;
	return sum;
}
//함수2) countTest
//함수이름: countTest
//매개변수:없음. 리턴값:정수. 함수를 실행한 횟수 출력
int countTest() {
	static int cnt = 0;
	cnt++;
	return cnt;
}

int main() {
	//printf("누적:%d\n",userSum(10));
	//printf("누적:%d\n",userSum(20));
	for (int i = 0; i < 10; i++) {
		printf("반복횟수:%d\n", countTest());
	}


















	return 0;
}