#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�Լ�: call by reference
//main�Լ��� a�� ���� ���� ����
//�ּҸ� �Ű������� �޴´�.
void change(int*p) {
	*p = 100;
}

void change2(int*i, int*j) {
	int temp = *i;
	*i = *j;
	*j = temp;
}

void sumcal(int*i, int*j) {
	*j += *i;
}

int main() {
	//�Լ��� ������ �ѱ��
	//int a = 10;
	//change(&a);
	//scanf("%d", &a);
	//printf("a: %d\n", a);

	//1)�μ� �ٲٱ�
	//int a = 10, b = 20;
	//change2(&a, &b);
	//printf("a: %d  b: %d\n", a, b);

	//2)int���� �Է¹޾� (�Լ��̿�)sum�� ����
	//int a, sum = 0;
	//while (1) {
	//	printf("���ڴ�? "); scanf("%d", &a);
	//	if (a == 0) break;
	//	sumcal(&a, &sum);
	//}
	//printf("�����հ�: %d\n", sum);





	return 0;
}