#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//for 반복문 : 초기화값실행>조건부합여부후실행>증감값실행>조건부합여부후실행...
	//int i; //반복할 변수
	//for (i=0;i<10;i++) {
	//	printf("%d ", i);
	//}

	//구구단을 출력해 보시오
	/*int i, a;*/
	//*printf("몇단을 출력할까요?"); scanf("%d", &a);
	//for (i = 1; i < 10; i++) {
	//	printf("%d * %d = %d\n", a, i, a * i);
	//}

	//int i, a;
	//do {
	//	printf("몇단을 출력할까요?"); scanf("%d", &a);
	// 	if (a!=0)
	//		for (i = 1; i < 10; i++) {
	//			printf("%d * %d = %d\n", a, i, a * i);
	//	}
	//} while (a != 0);

	//int i, a;
	//while (1) {
	//	printf("몇단을 출력할까요?"); scanf("%d", &a);
	//	if (a == 0) break;
	//	for (i = 1; i < 10; i++) {
	//		printf("%d * %d = %d\n", a, i, a * i);
	//	}
	//}

	//이중 for문
	//for (int i = 2;i<10;i++) {
	//	printf("------------\n");
	//	printf("<  %d 단  >\n", i);
	//	for (int j = 1; j < 10; j++) {
	//		printf("%d * %d = %d\n", i, j, i*j);
	//	}
	//}

	//삼중 for문
	//for (int i = 0; i < 10; i++) {
	//	for (int j = 0; j < 10; j++) {
	//		for (int k = 0; k < 10; k++) {
	//			printf("%d %d %d\n", i, j, k);
	//		}
	//	}
	//}

	//1부터 100까지의 합
	//int sum = 0;
	//for (int i = 1; i < 101; i++) {
	//	sum = sum + i;
	//}
	//printf("1부터 100까지의 합: %d\n", sum);

	//1부터 입력받은 수까지의 합
	//for문 안에서 선언된 변수는 for문의 지역변수가 되어 for문 밖에서 사용x
	//int sum = 0, i = 0, j = 0;
	//printf("숫자는?"); scanf("%d", &j);
	//for (i = 1; i < j+1; i++) {
	//		sum = sum + i;
	//	}
	//printf("1부터 %d까지의 합: %d\n", j, sum);
	//printf("i의 현재값 : %d", i);

	//두 정수를 입력 받아서 큰수에서 작은 수를 뺀 값을 구하는 프로그램
	//결과값: 두 정수의 차는 4이다.
	//int a, b, i;
	//for (i = 0; i < 10; i++) {
	//	printf("두 수는? "); printf("(잔여 i값: %d) ", 10 - i);
	//	scanf("%d ", &a);
	//	if (a == 0) break;
	//	scanf("%d ", &b);
	//	if (a > b)
	//		printf("두 정수의 차는 %d이다\n", a - b);
	//	else if (b > a)
	//		printf("두 정수의 차는 %d이다\n", b - a);
	//	else
	//		printf("두 정수의 차는 %d이다\n", b - a);
	//}
	
	//별찍기 1탄
	//for (int i = 1; i<8;i++) {
	//	for (int j = 0; j < i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//별찍기 2탄
	//i가 0일때 7번 반복, 1일 때 6번 반복
	//for (int i = 1; i<8;i++) {
	//	for (int j = 0; j < 8-i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	
	//별찍기 3탄
	//i가 0일 때 빈칸 7번반복, 별1반복
	//i가 1일 때 빈칸 6번반복, 별2반복
	//i가 2일 때 빈칸 5번반복, 별3반복

	//for (int i = 1; i < 8; i++) {
	//	for (int j = 0; j < 8 - i; j++) {
	//		printf("-");
	//	}
	//	for (int k = 0; k < i; k++) {
	//		printf("★");
	//	}
	//	printf("\n");
	//}

	//별찍기 4탄 ** 어려움 5번 반복
	//i가 0일 때 j 빈칸 5번, k 별1번
	//i가 1일 때 j 빈칸 4번, k 별3번
	//i가 2일 때 j 빈칸 3번, k 별5번
	//i가 3일 때 j 빈칸 2번, k 별7번
	//i가 4일 때 j 빈칸 1번, k 별9번
	//int i, j, k;
	//for (i = 0; i < 6; i++) {
	//	for (j = 5; j > i; j--) {
	//		printf("-");
	//	}
	//	for (k = 0; k < 2*i+1 ; k++) {
	//		printf("★");
	//	}
	//	printf("\n");
	//	}

	//실습) 두개의 숫자를 입력 받아서 두 수 사이의 정수의 합을 계산
	//int a, b;
	//int sum = 0;
	//printf("시작 정수는?"); scanf("%d", &a);
	//printf("마지막 정수는?"); scanf("%d", &b);
	//while (a < b+1) {
	//	sum = sum + a;
	//	a = a + 1;
	//}
	//printf("합계는? %d\n", sum);

	//풀이
	//for (int i = a; i < b+1; i++){
	// 
	//}

	//실습) 팩토리얼 구하기 n!
	//int a = 0;
	//int multi = 1;
	//printf("정수를 입력하세요."); scanf("%d", &a);
	//for (int i = 1; i < a+1; i++) {
	//	multi = multi*i;
	//}
	//printf("%d\n", multi);

	//실습) 점심메뉴 고르기 
	//메뉴를 고르면 가격과 해당 코너를 출력하는 프로그램 작성
	//q를 입력하면 종료
	//char a = 0;
	//do {
	//	printf("메뉴를 고르세요.\n");
	//	printf("1.짜장\n2.탕수육\n3.뚝불\n4.제육\n5.연어초밥\n6.모둠초밥\nq:종료\n음식번호:");
	//	scanf("%c", &a);
	//	getchar(); //엔터처리
	//	switch (a) {
	//	case '1':
	//	case '2':
	//		printf("중식코너\n\n"); break;
	//	case '3':
	//	case '4':
	//		printf("한식코너\n\n"); break;
	//	case '5':
	//	case '6':
	//		printf("일식코너\n\n"); break;
	//	case 'q':
	//		printf("종료합니다.\n\n"); break;
	//	default:
	//		printf("잘못입력하셨습니다.\n"); break;
	//	}

	//} while (a != 'q');

	//★★★★★★★★★★★★★★★★★★★★★★
	//실습) 1부터 10까지의 정수에서 두 수를 골라 합이 10이 되는 두 수 구하기. 
	//for (int i = 1; i < 10; i++) {
	//	for (int j = i; j < 10; j++) {
	//		if (i+j==10) printf("(%d,%d)\n", i, j);
	//	}
	//}
	return 0;
}