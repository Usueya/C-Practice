#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//for �ݺ��� : �ʱ�ȭ������>���Ǻ��տ����Ľ���>����������>���Ǻ��տ����Ľ���...
	//int i; //�ݺ��� ����
	//for (i=0;i<10;i++) {
	//	printf("%d ", i);
	//}

	//�������� ����� ���ÿ�
	/*int i, a;*/
	//*printf("����� ����ұ��?"); scanf("%d", &a);
	//for (i = 1; i < 10; i++) {
	//	printf("%d * %d = %d\n", a, i, a * i);
	//}

	//int i, a;
	//do {
	//	printf("����� ����ұ��?"); scanf("%d", &a);
	// 	if (a!=0)
	//		for (i = 1; i < 10; i++) {
	//			printf("%d * %d = %d\n", a, i, a * i);
	//	}
	//} while (a != 0);

	//int i, a;
	//while (1) {
	//	printf("����� ����ұ��?"); scanf("%d", &a);
	//	if (a == 0) break;
	//	for (i = 1; i < 10; i++) {
	//		printf("%d * %d = %d\n", a, i, a * i);
	//	}
	//}

	//���� for��
	//for (int i = 2;i<10;i++) {
	//	printf("------------\n");
	//	printf("<  %d ��  >\n", i);
	//	for (int j = 1; j < 10; j++) {
	//		printf("%d * %d = %d\n", i, j, i*j);
	//	}
	//}

	//���� for��
	//for (int i = 0; i < 10; i++) {
	//	for (int j = 0; j < 10; j++) {
	//		for (int k = 0; k < 10; k++) {
	//			printf("%d %d %d\n", i, j, k);
	//		}
	//	}
	//}

	//1���� 100������ ��
	//int sum = 0;
	//for (int i = 1; i < 101; i++) {
	//	sum = sum + i;
	//}
	//printf("1���� 100������ ��: %d\n", sum);

	//1���� �Է¹��� �������� ��
	//for�� �ȿ��� ����� ������ for���� ���������� �Ǿ� for�� �ۿ��� ���x
	//int sum = 0, i = 0, j = 0;
	//printf("���ڴ�?"); scanf("%d", &j);
	//for (i = 1; i < j+1; i++) {
	//		sum = sum + i;
	//	}
	//printf("1���� %d������ ��: %d\n", j, sum);
	//printf("i�� ���簪 : %d", i);

	//�� ������ �Է� �޾Ƽ� ū������ ���� ���� �� ���� ���ϴ� ���α׷�
	//�����: �� ������ ���� 4�̴�.
	//int a, b, i;
	//for (i = 0; i < 10; i++) {
	//	printf("�� ����? "); printf("(�ܿ� i��: %d) ", 10 - i);
	//	scanf("%d ", &a);
	//	if (a == 0) break;
	//	scanf("%d ", &b);
	//	if (a > b)
	//		printf("�� ������ ���� %d�̴�\n", a - b);
	//	else if (b > a)
	//		printf("�� ������ ���� %d�̴�\n", b - a);
	//	else
	//		printf("�� ������ ���� %d�̴�\n", b - a);
	//}
	
	//����� 1ź
	//for (int i = 1; i<8;i++) {
	//	for (int j = 0; j < i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//����� 2ź
	//i�� 0�϶� 7�� �ݺ�, 1�� �� 6�� �ݺ�
	//for (int i = 1; i<8;i++) {
	//	for (int j = 0; j < 8-i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	
	//����� 3ź
	//i�� 0�� �� ��ĭ 7���ݺ�, ��1�ݺ�
	//i�� 1�� �� ��ĭ 6���ݺ�, ��2�ݺ�
	//i�� 2�� �� ��ĭ 5���ݺ�, ��3�ݺ�

	//for (int i = 1; i < 8; i++) {
	//	for (int j = 0; j < 8 - i; j++) {
	//		printf("-");
	//	}
	//	for (int k = 0; k < i; k++) {
	//		printf("��");
	//	}
	//	printf("\n");
	//}

	//����� 4ź ** ����� 5�� �ݺ�
	//i�� 0�� �� j ��ĭ 5��, k ��1��
	//i�� 1�� �� j ��ĭ 4��, k ��3��
	//i�� 2�� �� j ��ĭ 3��, k ��5��
	//i�� 3�� �� j ��ĭ 2��, k ��7��
	//i�� 4�� �� j ��ĭ 1��, k ��9��
	//int i, j, k;
	//for (i = 0; i < 6; i++) {
	//	for (j = 5; j > i; j--) {
	//		printf("-");
	//	}
	//	for (k = 0; k < 2*i+1 ; k++) {
	//		printf("��");
	//	}
	//	printf("\n");
	//	}

	//�ǽ�) �ΰ��� ���ڸ� �Է� �޾Ƽ� �� �� ������ ������ ���� ���
	//int a, b;
	//int sum = 0;
	//printf("���� ������?"); scanf("%d", &a);
	//printf("������ ������?"); scanf("%d", &b);
	//while (a < b+1) {
	//	sum = sum + a;
	//	a = a + 1;
	//}
	//printf("�հ��? %d\n", sum);

	//Ǯ��
	//for (int i = a; i < b+1; i++){
	// 
	//}

	//�ǽ�) ���丮�� ���ϱ� n!
	//int a = 0;
	//int multi = 1;
	//printf("������ �Է��ϼ���."); scanf("%d", &a);
	//for (int i = 1; i < a+1; i++) {
	//	multi = multi*i;
	//}
	//printf("%d\n", multi);

	//�ǽ�) ���ɸ޴� ���� 
	//�޴��� ���� ���ݰ� �ش� �ڳʸ� ����ϴ� ���α׷� �ۼ�
	//q�� �Է��ϸ� ����
	//char a = 0;
	//do {
	//	printf("�޴��� ������.\n");
	//	printf("1.¥��\n2.������\n3.�Һ�\n4.����\n5.�����ʹ�\n6.����ʹ�\nq:����\n���Ĺ�ȣ:");
	//	scanf("%c", &a);
	//	getchar(); //����ó��
	//	switch (a) {
	//	case '1':
	//	case '2':
	//		printf("�߽��ڳ�\n\n"); break;
	//	case '3':
	//	case '4':
	//		printf("�ѽ��ڳ�\n\n"); break;
	//	case '5':
	//	case '6':
	//		printf("�Ͻ��ڳ�\n\n"); break;
	//	case 'q':
	//		printf("�����մϴ�.\n\n"); break;
	//	default:
	//		printf("�߸��Է��ϼ̽��ϴ�.\n"); break;
	//	}

	//} while (a != 'q');

	//�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�
	//�ǽ�) 1���� 10������ �������� �� ���� ��� ���� 10�� �Ǵ� �� �� ���ϱ�. 
	//for (int i = 1; i < 10; i++) {
	//	for (int j = i; j < 10; j++) {
	//		if (i+j==10) printf("(%d,%d)\n", i, j);
	//	}
	//}
	return 0;
}