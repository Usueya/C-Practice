#define _CRT_SECURE_NO_WARNINGS //scanf함수를 사용하기 위해서 설정

#include <stdio.h>
int main() {
	//입력함수
	
	//정수형 입력방법
	//int a;
	//printf("정수는?");scanf("%d",&a);
	////&a:변수a의 주소
	////%d정수%f소수%c문자하나%s문자열%p주소
	//printf("입력한 값 : %d  주소 : %p\n", a, &a);

	//실수형 입력방법 float 4byte
	//float f;
	//printf("실수는? "); scanf("%f", &f);
	//printf("입력한 값은 %f입니다.\n", f);
	//결과값: 3.14000

	//실수형 입력방법 double 8byte 더블형은 입력받는 형식도 더블형 포멧형식lf
	//double d;
	//printf("실수는? "); scanf("%lf", &d);
	//printf("입력한 값은 %f입니다.\n", d);
	//printf("입력한 값의 주소는 %p입니다.\n", &d);
	////%f결과값: -9255960443199147... 
	////%lf결과값: 3.14000
	////%p결과값: 00B3F96C >  총 4byte

	//문자형 입력방법
	//char c;
	//printf("문자는?");
	//scanf("%c", &c);
	//printf("입력한 문자는 %c\n", c);

	//실습) 두 정수를 입력받아 합계를 출력해라
	//int a, b;
	//printf("첫번째 숫자는?"); scanf("%d", &a);
	//printf("두번째 숫자는?"); scanf("%d", &b);
	//printf("%d + %d = %d\n", a, b, a + b);

	//printf("두 수는?");
	//scanf("%d %d", &a, &b); //엔터 또는 띄어쓰기 
	//printf("합계:%d\n", a + b);

	//실습)오늘의 날짜(년,월,일)를 입력받아 출력하기
	//int year, month, day;
	//printf("년도:"); scanf("%d", &year);
	//printf("월:"); scanf("%d", &month);
	//printf("일:"); scanf("%d", &day);
	//printf("오늘은 %d년 %d월 %d일 입니다.", year, month, day);

	//printf("년월일?(yyyy-mm-dd:"); scanf("%d%d%d", &year, &month, &day);
	//printf("오늘은 %d년 %d월 %d일 입니다.", year, month, day);

	//실습) 두개의 정수를 입력받아 산술연산 구하기
	//int a, b;
	//printf("두개의 정수:");	scanf("%d%d", &a, &b);
	//printf("%d + %d = %d\n", a + b);
	//printf("%d - %d = %d\n", a - b);
	//printf("%d * %d = %d\n", a * b);
	//printf("%d / %d = %f\n", (double)a / b);
	//*정수를 정수로 나눠서 실수가 나오길 원할 경우 (double로 실수형 변환 필요)

	//엔터처리 예제
	//int a, b;
	//char sign;
	//printf("계산식은?");	
	//scanf("%d%c%d", &a, &sign, &b);
	//printf("%d %c %d\n", a, sign, b);
	////엔터도 아스키코드값이 존재>문자로 인식
	////getchar(); //한문자를 읽어서 변환하는 함수, 엔터처리를 위한 목적

	//실습)물건 구입 후 거스름돈을 계산하여 출력하는 프로그램
	//단 물건값과 지불한 돈은 입력을 받는다.(삼항연산자 활용)
	//int a, b;
	//printf("물건값?"); scanf("%d", &a);
	//printf("지불한 금액?"), scanf("%d", &b);
	//a < b? 
	//	printf("거스름돈 : %d", b - a): 
	//	a == b ? 
	//		printf("계산완료") : printf("추가지불 : %d", a - b);

	//실습) 국어, 영어, 수학 점수를 입력 받아 합계와 평균을 구해라!
	//int kor, eng, mat;
	//printf("국어점수?"); scanf("%d", &kor);
	//printf("영어점수?"); scanf("%d", &eng);
	//printf("수학점수?"); scanf("%d", &mat);
	////scanf("%d%d%d", &kor, &eng, &mat)
	//int sum = kor + eng + mat;
	//printf("합계 : %d \n평균 : %.2f", sum, (double)sum/3);
	////*(kor + eng + mat)/3.)

	//실습)rgb 값 만들기
	//unsigned int 음수가 없음 int 4byte
	//int r, g, b;
	//printf("r값?"); scanf("%d", &r);
	//printf("g값?"); scanf("%d", &g);
	//printf("b값?"); scanf("%d", &b);

	//unsigned int rgb = r<<16 | g<<8 | b ; //r을 왼쪽으로 16bit 미룬다는 뜻
	//printf("RGB: %0X", rgb);
	////%0x 16진수를 표현하는 포멧형식

	return 0;
	//정상적으로 수행되면 0을 나타냄
}