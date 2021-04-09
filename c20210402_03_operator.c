#include <stdio.h>

int main() {
	//연산자(+,-,*,/,%)
	//정수와 정수는 정수
	//실수와 정수는 실수

	//int a = 20, b = 3;
	//printf("%d + %d = %d\n", a, b, a + b);
	//printf("%d - %d = %d\n", a, b, a - b);
	//printf("%d * %d = %d\n", a, b, a * b);
	//printf("%d / %d = %.1f\n", a, b, (double)a / b);
	//printf("%d %% %d = %d\n", a, b, a % b);

	//실습 a = 50, b = 3 일떄,
	//int a = 50, b = 3;
	//printf("몫 : %d\n", a / b);
	//printf("나머지 %d\n", a % b);
	//printf("나눈 실수값 : %.2f\n", (double)a / b);

	//단항연산자
	//++,-- 변수 앞에 붙이면 전위, 뒤에 붙이면 후위
	//int a = 10;
	//a++; // a = a + 1; // a += 1;
	//printf("%d\n", a);
	//a--;//a -= 1;// a = a - 1;
	//printf("%d\n", a);

	//
	//int a = 10;
	//printf("%d\n", a++); //후위:출력을하고증가
	//printf("%d\n", a); //따라서 a는 11로 바뀜
	//printf("%d\n", ++a); //전위:증가하고출력

	//
	//int a = 10;
	//a--;
	//printf("%d\n", --a);
	//printf("%d\n", a++);
	//printf("%d\n", a--);
	//printf("%d\n", a);

	//
	//int a = 10;
	//int b = --a;
	//int c = b++;
	//b = ++a;
	//printf("%d\n", a);
	//printf("%d\n", b);
	//printf("%d\n", c);

	//관계연산자
	//int a = 10, b = 20;
	//printf("%d\n", a < b); // 1 : true
	//printf("%d\n", a > b); // 0 : false
	//printf("%d\n", a == b); // 0 : false
	//printf("%d\n", a != b); // 1 : true

	//논리연산자 and=&&,  or=||,  not=!
	//int a = 10, b = 20;
	//printf("%d\n", a > 0 && b > 0); //true(1)+true(1) = true(1)
	//printf("%d\n", a > 0 && b < 0); //true(1)+false(0) = false(0)
	//printf("%d\n", a > 0 || b < 0); //true(1)+false(0) = true(1)
	//printf("%d\n", !(a > 0)); //false(0)

	//비트연산자: &, |. ~, ^
	//printf("%d\n", 4 & 3);
	//printf("%d\n", 4 | 3);

	//삼항 연산자
	//int a = -10;
	//a > 0 ? printf("양수") : printf('음수');

	//두 수중 큰 수를 출력
	//int a = 10, b = 20;
	//a>b? printf("%d", a) : printf("%d", b);

	//20,10,30의 3개의 정수가 주어졌을 때 가장 큰 값을 구하는 프로그램(삼항연산자)
	//int a = 20, b = 10, c = 30;
	//int max = a > b ? a : b;
	//max = max > c ? max : c;
	//printf("%d", max);	
	//int max = a > b ? (a > c ? a : c) : (b > c ? b : c);
	//printf("%d\n", max);

	//주어진 정수의 짝/홀수 결과출력
	//int a = 6, b = 9;
	//a % 2 == 0 ? printf("%d는 짝수입니다.\n",a) : printf("%d는 홀수입니다.\n", a);
	//b % 2 == 0 ? printf("%d는 짝수입니다.\n",b) : printf("%d는 홀수입니다.\n",b);

	//포인터변수를 이용한 짝/홀수
	//int a = 6; 
	//char* p = a % 2 == 0 ? "짝수" : "홀수"; //p포인터변수에 문자를 담아
	//printf("%d는 %s\n", a, p); //%s는 p의주소를 찾아 내용을 넘겨줌














}