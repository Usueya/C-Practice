#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�������迭:�迭���迭�������.(�������� �������� ����)
	//��) 1���л��� ����,����,���� ����, 2���л��� ����,����,���� ����

	//int arr[2][3];
	//arr[0][0] = 1; arr[0][1] = 2; arr[0][2] = 3;
	//arr[1][0] = 4; arr[1][1] = 5; arr[1][2] = 6;

	//int rsize = sizeof(arr)/sizeof(arr[0]);
	//int csize = sizeof(arr[0])/sizeof(int);
	//printf("�� ������: %d\n", rsize);
	//printf("�� ������: %d\n", csize);

	//�����迭�� �ݺ��� > ���� �ݺ���
	//for (int i = 0; i < rsize; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		arr[i][j] = (3*i)+j+1;
	//		printf("%d\n", arr[i][j]);
	//	}
	//}

	//���л��� ������ ������ �Է¹޾� ��ȣ��� �迭 ���� �� ��ȣ ������ ������ ������
	//int arr[2][3];
	//int rsize = sizeof(arr)/sizeof(arr[0]);
	//int csize = sizeof(arr[0])/sizeof(int);
	//printf("rsize��: %d, csize��: %d\n", rsize, csize);

	//printf("1.������ ������? "); scanf("%d,%d,%d", &arr[0][0], &arr[0][1], &arr[0][2]);
	//printf("2.������ ������? "); scanf("%d,%d,%d", &arr[1][0], &arr[1][1], &arr[1][2]);
	//int asum = arr[0][0] + arr[0][1] + arr[0][2];
	//int bsum = arr[1][0] + arr[1][1] + arr[1][2];
	//int koravg = arr[0][0] + arr[1][0] / rsize;
	//int engavg = arr[0][1] + arr[1][1] / rsize;
	//int matavg = arr[0][2] + arr[1][2] / rsize;

	//printf("1���� �հ�: %d�� ��� : %.2f\n", asum, (double)asum/csize);
	//printf("2���� �հ�: %d�� ��� : %.2f\n", bsum, (double)bsum/csize);
	//printf("�������: %d, �������: %d, �������: %d", koravg, engavg, matavg);

	//Ǯ��)2���� �л��� 3���� ���� �ޱ�
	int score[2][3]; 
	for (int i = 0; i < 2; i++) {
		printf("%d)������ ������?", i+1);
		for (int j = 0; j < 3; j++) {
			scanf("%d", &score[i][j]);
		}
	}
	//Ǯ��)���� ���� �л��� �հ�, ���
	int sum = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			sum += score[i][j];
		}
		printf("[%d]�հ�: %d, ���: %.2f\n", i + 1, sum, sum/3.);
		sum = 0;
	}
	return 0;
}