#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 5

int main() {
	//�迭: array ���� �����͸� �� ������ ����
	//�ε����� ����(0���ͽ���)
	//arr -> �ּ�, arr[0] -> ���� �θ��� ������

	//int arr[3];
	//arr[0] = 10; arr[1] = 20; arr[2] = 30;
	//printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	//printf("%p %d\n", arr, sizeof(arr));

	//for������ �ʱ�ȭ�ϱ�
	//for (int i = 0; i < 3; i++) {
	//	arr[i] = (i + 1)*10;
	//}

	//for������ printf�ϱ�
	//for (int i = 0; i < 3; i++) {
	//	printf("%d ", arr[i]);
	//}

	//�Ҽ��� �迭�� �迭�� ũ�� ���ϱ�
	//double arr[3] = {1.1,2.1,3.1};
	//double arr[5];
	//int size = sizeof(arr) / sizeof(double);
	//printf("������� = %d\n", size);
	//for (int i = 0; i < size; i++) {
	//	arr[i] = i + 1.1;
	//}
	//for (int i = 0; i < size; i++) {
	//	printf("%.1lf ", arr[i]);
	//}

	//������ �迭
	//char arr[] = {'a','b','c','d'};
	//int size = sizeof(arr) / sizeof(char);
	//printf("������: %d\n", size);
	//for (int i = 0; i < size; i++) {
	//	printf("%c ", arr[i]);
	//}

	//�迭�� �հ�
	//int arr[] = {2,5,7,40,39};
	//int sum = 0;
	//int size = sizeof(arr) / sizeof(int);
	//printf("������:%d\n", size);
	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//}
	//printf("���հ�:%d\n", sum);

	//�Է��� �ް� �迭�� �հ�
	//��, int a= 5; > int arr[a]�� (��Ÿ�ӽ� ����) �����迭�� ����Ұ�(����� ���س�����)
	//const int a= 5; ���(������ �Ұ��� ��)
	//��, #define LEN 5 ��ũ�� ����� ������ ���� ��ü(�޸𸮿� �ö�������)
	//int arr[LEN], sum = 0;
	//int size = sizeof(arr) / sizeof(int);
	//for (int i = 0; i < size; i++) {
	//	printf("[%d]������? ",i+1); scanf("%d", &arr[i]);
	//}
	//printf("���Է��� ����:\n");
	//for (int i = 0; i < size; i++) {
	//printf("%d(%p)\n", arr[i], &arr[i]);
	//}
	//for (int i = 0; i < size; i++) {
	//sum += arr[i];
	//}
	//printf("�����հ�: %d\n", sum);

	//���л��� ������ �Է¹޾� ��ȣ��� �迭�� ���� �� �� ��ȣ ������� ���
	//int arr[3], sum = 0;
	//int size = sizeof(arr) / sizeof(int);
	//for (int i = 0; i < size; i++) {
	//	printf("%d�� ������? ", i + 1); scanf("%d", &arr[i]);
	//}
	//printf("----------------\n");
	//for (int i = 0; i < size; i++) {
	//	printf("%d�� ����: %d\n", i + 1, arr[i]);
	//	sum += arr[i];
	//}

	////�հ�� ��� ���
	//printf("----------------\n");
	//printf("�հ�: %d, ���: %.2f\n", sum, (double)sum / size);
	//printf("----------------\n");
	
	//�Է¹��� �л��� ���� ���
	//int num = 0;
	//char quit;

	//1)whileȰ���ϱ�
	//while (1) {
	//	printf("�л���ȣ��? "); scanf("%d", &num);
	//	getchar();
	//	if (num < 1 || num > size) {
	//		printf("�߸��� ��ȣ�Դϴ�.\n"); continue;
	//	}
	//	printf("%d���� ������: %d\n", num, arr[num - 1]);
	//	printf("----------------\n");
	//	printf("����(q)? "); scanf("%c", &quit);
	//	if (quit == 'q') break;
	//}

	//2)do whileȰ���ϱ�
	//do {
	//	printf("�л���ȣ��? "); scanf("%d", &num);
	//	getchar();
	//	if (num < 1 || num > size) {
	//		printf("�߸��� ��ȣ�Դϴ�.\n"); continue;
	//	}
	//	printf("%d���� ������: %d\n", num, arr[num - 1]);
	//	printf("----------------\n");
	//	printf("����(q)? "); scanf("%c", &quit);
	//} while (quit != 'q');


	return 0;
}