#include <stdio.h>

int main() {
	//정수형(4byte) 변수명을 선언
	//int a; 
	//a = 10; //초기화
	//printf("%d\n", a);
	
	//실수형(4byte) 변수명 선언, double(8byte) > 사이즈에 따라 정확성의 차이가 존재
	//float f;
	//double d;
	//f = 3.145558745698745622588525; //초기화
	//d = 3.145558745698745622588525; //초기화
	//printf("%.20f\n", f);
	//printf("%.20f\n", d);

	//문자형 char 1byte
	//char c = 'A'; //선언과 동시에 초기화
	//printf("문자는 %c  %d\n", c, c);

	//데이터형의 바이트수
	//int a = 100;
	//printf("정수형: %d\n", sizeof(a)); //sizeof()연산자
	//float f = 3.14;
	//double d = 3.14;
	//printf("float형: %d, double형: %d\n", sizeof(f), sizeof(d));
	//char c = 'a';
	//printf("char형: %d\n", sizeof(c));

	//문자열은 존재x, char은 1byte, int은 4byte, double은 8byte
	//어떤 데이터를 저장하려고하는데, char형으로 5개가 필요하다는 의미
	//배열의 이름은 주소를 가진다. 문자의 끝은 \0이 있어서 주소시작~\0까지
	//배열의 크기는 문자열의 크기+1, 선언과 동시에 초기화시에는 배열의 크기 생략
	//char c[] = "hello!!!!!!"; //nul문자를 마지막에 추가가 된다.
	//printf("%s",c); //문자열을 출력하기위한 포멧문자 %s, c라는 주소를 넘겨줌.
	//char c[] = "hello";
	////c = "hello"; 상수기 때문에 불가
	//
	//printf("문자열: %s 사이즈크기: %d\n", c, sizeof(c));
	//printf("%c\n", c[0]);

	return 0;
}