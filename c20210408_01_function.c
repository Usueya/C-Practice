#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//매개변수:없다, 반환값:없다.
void voidtest() {
	printf("void함수\n");
}
//매개변수:1개, 반환값:없다.
void voidtest2(int a) {
	printf("매개변수:%d\n", a);
}
//매개변수:2개, 반환값:합계.
void voidtest3(int a, int b) {
	printf("두수의 합:%d\n", a + b);
}
//함수만들기
//함수이름 : area
//매개변수(r):반지름(double형)
//원의 넓이를 출력해주는 기능
//call by value방식
void area(double r) { //지역변수 : 함수실행시 생성, 종료시 소멸
	printf("원의 넓이는: %.2f", r * r * 3.14);
}
//함수만들기
//void는 리턴이 없을때.
//리턴이 있으면 리턴값의 형태
//매개변수:반지름(double), 반환값:넓이(double)
//목적: 원의 넓이를 구해서 반환하는 함수
double areaReturn(double r) {
	double area = r * r * 3.14;
	return area; //반환값은 무조건 1개
}
//세 정수를 입력받아서 합을 반환하는 함수
int sum(int a, int b, int c) {
	return a + b + c;
}
//두개의 정수를 매개변수로 받아 나눈 실수값 반환하는 함수
double division(int a, int b) {
	return (double)a / b;
}
//두 수를 매개변수로 받아 큰 수를 반환하는 함수
int maxxx(int a, int b) {
	if (a > b) return a;
	else if (b > a) return b;
	else return 0;
}

//main > 진입점(가장먼저실행) 함수
int main() {
	//함수
	//voidtest();
	//voidtest2(10);
	//voidtest3(10, 20);

	//double r;
	//printf("반지름은? "); scanf("%lf", &r);
	
	//area(r);
	//double r = 3.6;
	//double rValue = areaReturn(r);
	//printf("넓이: %.2f", rValue);

	//int a, b, c;
	//printf("숫자는? "); scanf("%d%d%d", &a, &b, &c);
	//printf("합계는? %d", sum(a, b, c));

	//printf("나눈값: %.2f",division(10, 3));

	printf("큰 값은? %d\n", maxxx(27, 58));
	int m = maxxx(57, 57);
	if (m == 0) printf("같다");
	else printf("큰수는 %d", m);
	
	return 0;
}