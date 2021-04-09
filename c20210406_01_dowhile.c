#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//do ~while
	//do {실행문} -> 최소1번은 실행한 뒤, while (조건)에 따라 지속여부 판단
	//int a = -1;
	//do {
	//	printf("%d ", a);
	//} while (a>0);

	//사용자에게 입력받아 y이면 Music Play!:) 출력
	//char answer = 'y';
	//while (answer == 'y') {
	//	printf("뮤직을 출력할까요?(y/n)");
	//	scanf("%c", &answer);
	//	printf("뮤직~플레이!\n");
	//}
	
	//결과값에 y엔터가 입력되어 엔터값(버퍼) 때문에 한번 더 출력이 일어남!
	//뮤직을 출력할까요?(y/n)y
	//뮤직~플레이!
	//뮤직을 출력할까요 ? (y / n)뮤직~플레이!
	//char answer = 'y';
	//while (answer == 'y') {
	//	printf("뮤직을 출력할까요?(y/n)");
	//	scanf("%c", &answer);
	//	getchar(); //엔터값 처리
	//	printf("뮤직~플레이!\n");
	//}

	//먼저 실행 후 입력된 값으로 지속여부 확인임으로 do~while이 적절!
	//char answer = 'y';
	//do {
	//	printf("뮤직~플레이!\n");
	//	printf("계속 플레이할까요?(y/n)");
	//	scanf("%c", &answer);
	//	getchar(); //엔터값 처리
	//} while (answer == 'y');

	//어떤 정수를 계속 입력 받아 합계를 더하고 0을 입력할 경우 종료
	//*scanf에는 \n 입력하지 말것!!
	//int a = 0, sum = 0;
	//do {
	//	printf("정수를 입력하세요."); scanf("%d", &a);
	//	sum = sum + a;
	//} while (a != 0); //지속할 조건 값
	//printf("지금까지 더한 수는 %d입니다.", sum);
	return 0;
}