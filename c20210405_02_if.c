#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//���ǽ��� ���� �� ������ ����� ������ �� ����

	//int num1, num2;
	//
	//printf("num1: "); scanf("%d", &num1);
	//printf("num2: "); scanf("%d", &num2);

	//if (num1 > num2) {
	//	printf("num1�� num2���� �� ũ��.");
	//}
	//else {
	//	printf("num2�� num1���� �� ũ��.");
	//}

	//int a = 0;
	//if (a > 0) { 
	//	printf("���\n");
	//}
	//else { 
	//	if (a < 0) {
	//		printf("����\n");
	//	}
	//	else {
	//		printf("����� ������ �ƴϴ�.\n");
	//	}
	//}

	////��ø if�� �����ϰ� ǥ���ϱ�
	//int a = 0;
	//if (a > 0)
	//	printf("���\n");
	//else if (a < 0) 
	//		printf("����\n");
	//else 
	//	printf("����� ������ �ƴϴ�.\n");

	//�ǽ�)�� ������ �Է¹޾� ū ���� ����ض� (�� ���� ���� ���� �ִ�.)
	//*int a, b;
	//printf("��������?");
	//scanf("%d %d", &a, &b);
	//if (a > b)
	//	printf("ū ���� %d�Դϴ�.\n", a);
	//else if (a < b)
	//		printf("ū ���� %d�Դϴ�.\n", b);
	//else
	//	printf("�� ���� �����ϴ�.\n");

	//�ǽ�)�л��� ������ �Է¹޾� ������ ����ϴ� ���α׷�
	//90�̻� A, 80�̻� B, 70�� �̻� C, 60�� �̻� D, 60�� �̸� F
	// || : or, && : and
	//int score;
	//printf("������? "); scanf("%d", &score);
	//if (score<0 || score>100) //
	//	printf("�߸��� �����Դϴ�.");
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

	//�ǽ� 60���̸��� ����, ������ ���� �Է� �ޱ� ������ ��� ���
	//int kor, eng, mat;
	//printf("������ ������?"); scanf("%d%d%d", &kor, &eng, &mat);
	//int sum = kor + eng + mat;

	//if (kor < 0 || kor>100 || eng < 0 || eng>100 || mat < 0 || mat>100)
	//	printf("�߸��� ����");
	//else if (kor < 60 || eng < 60 || mat < 60)
	//	printf("����");
	//else
	//	printf("�հ�� %d��\n����� %.2f��", sum, (double)sum / 3);
	
	//������ �Է¹޾� ���޿��θ� ����Ͻÿ�
	//int year;
	//printf("������?"); scanf("%d", &year);
	//if ( ( (year % 4 == 0) && (year % 100 != 0) ) || (year % 400 == 0) )
	//	printf("%d���� �����Դϴ�.\n", year);
	//else
	//	printf("%d���� ������ �ƴմϴ�.\n", year);

	//�߽�-¥��, «��, �ѽ�-������, �����, ���-����, ���İ�Ƽ
	//�޴��� �����ϼ��� : 3 > **�ڳʷ� ������
	int  a;
	printf("********************\n");
	printf("1.�����, 2.«��\n3.������, 4.�����\n5.����, 6.���İ�Ƽ\n********************\n�޴��������ϼ���.");
	scanf("%d", &a);

	if (a == 1 || a == 2)
		printf("�߽��ڳʷ� ������.");
	else if (a == 3 || a == 4)
		printf("�ѽ��ڳʷ� ������.");
	else if (a == 5 || a == 6)
		printf("����ڳʷ� ������.");
	else
		printf("�߸��� �޴�");

	return 0;


}