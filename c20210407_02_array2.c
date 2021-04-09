#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//다차원배열:배열에배열을만든다.(데이터의 쉬운접근 목적)
	//예) 1번학생의 국어,영어,수학 점수, 2번학생의 국어,영어,수학 점수

	//int arr[2][3];
	//arr[0][0] = 1; arr[0][1] = 2; arr[0][2] = 3;
	//arr[1][0] = 4; arr[1][1] = 5; arr[1][2] = 6;

	//int rsize = sizeof(arr)/sizeof(arr[0]);
	//int csize = sizeof(arr[0])/sizeof(int);
	//printf("행 사이즈: %d\n", rsize);
	//printf("열 사이즈: %d\n", csize);

	//이차배열의 반복문 > 이중 반복문
	//for (int i = 0; i < rsize; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		arr[i][j] = (3*i)+j+1;
	//		printf("%d\n", arr[i][j]);
	//	}
	//}

	//반학생의 국영수 점수를 입력받아 번호대로 배열 저장 후 번호 순으로 총점과 평균출력
	//int arr[2][3];
	//int rsize = sizeof(arr)/sizeof(arr[0]);
	//int csize = sizeof(arr[0])/sizeof(int);
	//printf("rsize는: %d, csize는: %d\n", rsize, csize);

	//printf("1.국영수 점수는? "); scanf("%d,%d,%d", &arr[0][0], &arr[0][1], &arr[0][2]);
	//printf("2.국영수 점수는? "); scanf("%d,%d,%d", &arr[1][0], &arr[1][1], &arr[1][2]);
	//int asum = arr[0][0] + arr[0][1] + arr[0][2];
	//int bsum = arr[1][0] + arr[1][1] + arr[1][2];
	//int koravg = arr[0][0] + arr[1][0] / rsize;
	//int engavg = arr[0][1] + arr[1][1] / rsize;
	//int matavg = arr[0][2] + arr[1][2] / rsize;

	//printf("1번의 합계: %d점 평균 : %.2f\n", asum, (double)asum/csize);
	//printf("2번의 합계: %d점 평균 : %.2f\n", bsum, (double)bsum/csize);
	//printf("국어평균: %d, 영어평균: %d, 수학평균: %d", koravg, engavg, matavg);

	//풀이)2명의 학생의 3과목 점수 받기
	int score[2][3]; 
	for (int i = 0; i < 2; i++) {
		printf("%d)국영수 점수는?", i+1);
		for (int j = 0; j < 3; j++) {
			scanf("%d", &score[i][j]);
		}
	}
	//풀이)받은 값을 학생별 합계, 평균
	int sum = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			sum += score[i][j];
		}
		printf("[%d]합계: %d, 평균: %.2f\n", i + 1, sum, sum/3.);
		sum = 0;
	}
	return 0;
}