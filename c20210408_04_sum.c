#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Լ�1) userSum
//�Ű������� ������ �Է�, �����ϴ� �Լ�
//���������� ���������� ���� ���, ���������� �켱!
int userSum(int a) {
	static int sum = 0; 
	//static ����
	//�Լ��� ���ʷ� ����Ǿ��� �� �����Ǿ� ���α׷� ����� �Ҹ�
	//����� �Լ��ȿ����� ���ٰ���
	//����(stack)�޸� ����: FILO(First In, Last Out)
	//static�޸� : ������ ���������Ǿ� �Լ��ȿ�����
	sum = sum + a;
	return sum;
}
//�Լ�2) countTest
//�Լ��̸�: countTest
//�Ű�����:����. ���ϰ�:����. �Լ��� ������ Ƚ�� ���
int countTest() {
	static int cnt = 0;
	cnt++;
	return cnt;
}

int main() {
	//printf("����:%d\n",userSum(10));
	//printf("����:%d\n",userSum(20));
	for (int i = 0; i < 10; i++) {
		printf("�ݺ�Ƚ��:%d\n", countTest());
	}


















	return 0;
}