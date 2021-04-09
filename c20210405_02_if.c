#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//조건식이 참일 때 수행할 문장과 거짓일 때 문장

	//int num1, num2;
	//
	//printf("num1: "); scanf("%d", &num1);
	//printf("num2: "); scanf("%d", &num2);

	//if (num1 > num2) {
	//	printf("num1이 num2보다 더 크다.");
	//}
	//else {
	//	printf("num2이 num1보다 더 크다.");
	//}

	//int a = 0;
	//if (a > 0) { 
	//	printf("양수\n");
	//}
	//else { 
	//	if (a < 0) {
	//		printf("음수\n");
	//	}
	//	else {
	//		printf("양수도 음수도 아니다.\n");
	//	}
	//}

	////중첩 if문 간단하게 표현하기
	//int a = 0;
	//if (a > 0)
	//	printf("양수\n");
	//else if (a < 0) 
	//		printf("음수\n");
	//else 
	//	printf("양수도 음수도 아니다.\n");

	//실습)두 정수를 입력받아 큰 수를 출력해라 (두 수는 같을 수도 있다.)
	//*int a, b;
	//printf("두정수는?");
	//scanf("%d %d", &a, &b);
	//if (a > b)
	//	printf("큰 수는 %d입니다.\n", a);
	//else if (a < b)
	//		printf("큰 수는 %d입니다.\n", b);
	//else
	//	printf("두 수는 같습니다.\n");

	//실습)학생의 점수를 입력받아 학점을 출력하는 프로그램
	//90이상 A, 80이상 B, 70점 이상 C, 60점 이상 D, 60점 미만 F
	// || : or, && : and
	//int score;
	//printf("점수는? "); scanf("%d", &score);
	//if (score<0 || score>100) //
	//	printf("잘못된 점수입니다.");
	//else if (score >= 90)
	//	printf("A");
	//else if (score >= 80)
	//	printf("B");
	//else if (score >= 70)
	//	printf("C");
	//else if (score >= 60)
	//	printf("D");
	//else
	//	printf("F");

	//실습 60점미만은 과락, 국영수 점수 입력 받기 총점과 평균 출력
	//int kor, eng, mat;
	//printf("국영수 점수는?"); scanf("%d%d%d", &kor, &eng, &mat);
	//int sum = kor + eng + mat;

	//if (kor < 0 || kor>100 || eng < 0 || eng>100 || mat < 0 || mat>100)
	//	printf("잘못된 점수");
	//else if (kor < 60 || eng < 60 || mat < 60)
	//	printf("과락");
	//else
	//	printf("합계는 %d점\n평균은 %.2f점", sum, (double)sum / 3);
	
	//연도를 입력받아 윤달여부를 출력하시오
	//int year;
	//printf("연도는?"); scanf("%d", &year);
	//if ( ( (year % 4 == 0) && (year % 100 != 0) ) || (year % 400 == 0) )
	//	printf("%d년은 윤년입니다.\n", year);
	//else
	//	printf("%d년은 윤년이 아닙니다.\n", year);

	//중식-짜장, 짬뽕, 한식-설렁탕, 비빔밥, 양식-피자, 스파게티
	//메뉴를 선택하세요 : 3 > **코너로 가세요
	int  a;
	printf("********************\n");
	printf("1.자장면, 2.짬뽕\n3.설렁탕, 4.비빔밥\n5.피자, 6.스파게티\n********************\n메뉴를선택하세요.");
	scanf("%d", &a);

	if (a == 1 || a == 2)
		printf("중식코너로 가세요.");
	else if (a == 3 || a == 4)
		printf("한식코너로 가세요.");
	else if (a == 5 || a == 6)
		printf("양식코너로 가세요.");
	else
		printf("잘못된 메뉴");

	return 0;


}