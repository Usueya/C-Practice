#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��������:���α׷����۽� �����ǰ� ����� �Ҹ�
//���� ���� �ڵ��ʱ�ȭ(ex, int��:0, char��:null)
//���к��� ������ ����, ���α׷��� ���⵵ ����!, �޸� ����!
int g; //��������
void test() {
	printf("a: %d\n", a);
	printf("g: %d\n", g);
}

int main() {
	//��������{}�ۿ� : ��������{}�ȿ�
	//��������: �Լ��� ���۵� �� �����Ǿ� ����� �� �Ҹ�
	int a = 10;//��������

	printf("a: %d\n", a);
	printf("g: %d\n", g);

	return 0;
}