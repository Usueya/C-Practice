#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�������ǹ� : switch ~ case
	//�߰�ȣ�� ������ ���۰� ���� ����
	//int a = 2;
	//switch (a) {
	//case 0: 
	//	printf("zero\n"); break;
	//case 1: 
	//	printf("one\n"); break;
	//case 2:
	//	printf("two\n"); break;
	//default:
	//	printf("�߸��� ����");
	//}

	//���� �������� ����ϼ���
	//int month = 4;
	//switch (month) {
	//case 1: 
	//case 3:
	//case 5:
	//case 7:
	//case 8:
	//case 10:
	//case 12:
	//	printf("31��"); break;
	//case 2:
	//	printf("28��"); break;
	//case 4:
	//case 6:
	//case 9:
	//case 11:
	//	printf("30��"); break;
	//default:
	//	printf("�߸��� ����");
	//}

	//�޴��� ���� switch�� �ٲٱ�

	int  a;
	printf("********************\n");
	printf("1.�����, 2.«��\n3.������, 4.�����\n5.����, 6.���İ�Ƽ\n********************\n�޴��������ϼ���.");
	scanf("%d", &a);

	switch (a) {
	case 1:
	case 2:
		printf("�߽��ڳ�\n"); break;
	case 3:
	case 4:
		printf("�ѽ��ڳ�\n"); break;
	case 5:
	case 6:
		printf("����ڳ�\n"); break;
	default:
		printf("�߸��� ����\n"); break;
	}
	return 0;

}