#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 5

int main() {
	//배열: array 여러 데이터를 한 변수에 저장
	//인덱스로 구분(0부터시작)
	//arr -> 주소, arr[0] -> 값을 부르는 변수명

	//int arr[3];
	//arr[0] = 10; arr[1] = 20; arr[2] = 30;
	//printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	//printf("%p %d\n", arr, sizeof(arr));

	//for문으로 초기화하기
	//for (int i = 0; i < 3; i++) {
	//	arr[i] = (i + 1)*10;
	//}

	//for문으로 printf하기
	//for (int i = 0; i < 3; i++) {
	//	printf("%d ", arr[i]);
	//}

	//소수형 배열과 배열의 크기 구하기
	//double arr[3] = {1.1,2.1,3.1};
	//double arr[5];
	//int size = sizeof(arr) / sizeof(double);
	//printf("사이즈는 = %d\n", size);
	//for (int i = 0; i < size; i++) {
	//	arr[i] = i + 1.1;
	//}
	//for (int i = 0; i < size; i++) {
	//	printf("%.1lf ", arr[i]);
	//}

	//문자형 배열
	//char arr[] = {'a','b','c','d'};
	//int size = sizeof(arr) / sizeof(char);
	//printf("사이즈: %d\n", size);
	//for (int i = 0; i < size; i++) {
	//	printf("%c ", arr[i]);
	//}

	//배열의 합계
	//int arr[] = {2,5,7,40,39};
	//int sum = 0;
	//int size = sizeof(arr) / sizeof(int);
	//printf("사이즈:%d\n", size);
	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//}
	//printf("총합계:%d\n", sum);

	//입력을 받고 배열의 합계
	//단, int a= 5; > int arr[a]는 (런타임시 적용) 정적배열로 적용불가(사이즈를 정해놔야해)
	//const int a= 5; 상수(변경이 불가한 값)
	//단, #define LEN 5 매크로 상수로 컴파일 전에 대체(메모리에 올라가지않음)
	//int arr[LEN], sum = 0;
	//int size = sizeof(arr) / sizeof(int);
	//for (int i = 0; i < size; i++) {
	//	printf("[%d]정수는? ",i+1); scanf("%d", &arr[i]);
	//}
	//printf("▶입력한 값은:\n");
	//for (int i = 0; i < size; i++) {
	//printf("%d(%p)\n", arr[i], &arr[i]);
	//}
	//for (int i = 0; i < size; i++) {
	//sum += arr[i];
	//}
	//printf("▶총합계: %d\n", sum);

	//반학생의 점수를 입력받아 번호대로 배열에 저장 후 반 번호 순서대로 출력
	//int arr[3], sum = 0;
	//int size = sizeof(arr) / sizeof(int);
	//for (int i = 0; i < size; i++) {
	//	printf("%d번 점수는? ", i + 1); scanf("%d", &arr[i]);
	//}
	//printf("----------------\n");
	//for (int i = 0; i < size; i++) {
	//	printf("%d번 점수: %d\n", i + 1, arr[i]);
	//	sum += arr[i];
	//}

	////합계와 평균 출력
	//printf("----------------\n");
	//printf("합계: %d, 평균: %.2f\n", sum, (double)sum / size);
	//printf("----------------\n");
	
	//입력받은 학생의 점수 출력
	//int num = 0;
	//char quit;

	//1)while활용하기
	//while (1) {
	//	printf("학생번호는? "); scanf("%d", &num);
	//	getchar();
	//	if (num < 1 || num > size) {
	//		printf("잘못된 번호입니다.\n"); continue;
	//	}
	//	printf("%d번의 점수는: %d\n", num, arr[num - 1]);
	//	printf("----------------\n");
	//	printf("종료(q)? "); scanf("%c", &quit);
	//	if (quit == 'q') break;
	//}

	//2)do while활용하기
	//do {
	//	printf("학생번호는? "); scanf("%d", &num);
	//	getchar();
	//	if (num < 1 || num > size) {
	//		printf("잘못된 번호입니다.\n"); continue;
	//	}
	//	printf("%d번의 점수는: %d\n", num, arr[num - 1]);
	//	printf("----------------\n");
	//	printf("종료(q)? "); scanf("%c", &quit);
	//} while (quit != 'q');


	return 0;
}