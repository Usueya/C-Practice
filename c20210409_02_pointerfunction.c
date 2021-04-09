#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//함수: call by reference
//main함수의 a의 값을 변경 가능
//주소를 매개변수로 받는다.
void change(int*p) {
	*p = 100;
}

void change2(int*i, int*j) {
	int temp = *i;
	*i = *j;
	*j = temp;
}

void sumcal(int*i, int*j) {
	*j += *i;
}

int main() {
	//함수에 포인터 넘기기
	//int a = 10;
	//change(&a);
	//scanf("%d", &a);
	//printf("a: %d\n", a);

	//1)두수 바꾸기
	//int a = 10, b = 20;
	//change2(&a, &b);
	//printf("a: %d  b: %d\n", a, b);

	//2)int값을 입력받아 (함수이용)sum에 누적
	//int a, sum = 0;
	//while (1) {
	//	printf("숫자는? "); scanf("%d", &a);
	//	if (a == 0) break;
	//	sumcal(&a, &sum);
	//}
	//printf("누적합계: %d\n", sum);





	return 0;
}