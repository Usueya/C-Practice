#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//do ~while
	//do {���๮} -> �ּ�1���� ������ ��, while (����)�� ���� ���ӿ��� �Ǵ�
	//int a = -1;
	//do {
	//	printf("%d ", a);
	//} while (a>0);

	//����ڿ��� �Է¹޾� y�̸� Music Play!:) ���
	//char answer = 'y';
	//while (answer == 'y') {
	//	printf("������ ����ұ��?(y/n)");
	//	scanf("%c", &answer);
	//	printf("����~�÷���!\n");
	//}
	
	//������� y���Ͱ� �ԷµǾ� ���Ͱ�(����) ������ �ѹ� �� ����� �Ͼ!
	//������ ����ұ��?(y/n)y
	//����~�÷���!
	//������ ����ұ�� ? (y / n)����~�÷���!
	//char answer = 'y';
	//while (answer == 'y') {
	//	printf("������ ����ұ��?(y/n)");
	//	scanf("%c", &answer);
	//	getchar(); //���Ͱ� ó��
	//	printf("����~�÷���!\n");
	//}

	//���� ���� �� �Էµ� ������ ���ӿ��� Ȯ�������� do~while�� ����!
	//char answer = 'y';
	//do {
	//	printf("����~�÷���!\n");
	//	printf("��� �÷����ұ��?(y/n)");
	//	scanf("%c", &answer);
	//	getchar(); //���Ͱ� ó��
	//} while (answer == 'y');

	//� ������ ��� �Է� �޾� �հ踦 ���ϰ� 0�� �Է��� ��� ����
	//*scanf���� \n �Է����� ����!!
	//int a = 0, sum = 0;
	//do {
	//	printf("������ �Է��ϼ���."); scanf("%d", &a);
	//	sum = sum + a;
	//} while (a != 0); //������ ���� ��
	//printf("���ݱ��� ���� ���� %d�Դϴ�.", sum);
	return 0;
}