#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Ű�����:����, ��ȯ��:����.
void voidtest() {
	printf("void�Լ�\n");
}
//�Ű�����:1��, ��ȯ��:����.
void voidtest2(int a) {
	printf("�Ű�����:%d\n", a);
}
//�Ű�����:2��, ��ȯ��:�հ�.
void voidtest3(int a, int b) {
	printf("�μ��� ��:%d\n", a + b);
}
//�Լ������
//�Լ��̸� : area
//�Ű�����(r):������(double��)
//���� ���̸� ������ִ� ���
//call by value���
void area(double r) { //�������� : �Լ������ ����, ����� �Ҹ�
	printf("���� ���̴�: %.2f", r * r * 3.14);
}
//�Լ������
//void�� ������ ������.
//������ ������ ���ϰ��� ����
//�Ű�����:������(double), ��ȯ��:����(double)
//����: ���� ���̸� ���ؼ� ��ȯ�ϴ� �Լ�
double areaReturn(double r) {
	double area = r * r * 3.14;
	return area; //��ȯ���� ������ 1��
}
//�� ������ �Է¹޾Ƽ� ���� ��ȯ�ϴ� �Լ�
int sum(int a, int b, int c) {
	return a + b + c;
}
//�ΰ��� ������ �Ű������� �޾� ���� �Ǽ��� ��ȯ�ϴ� �Լ�
double division(int a, int b) {
	return (double)a / b;
}
//�� ���� �Ű������� �޾� ū ���� ��ȯ�ϴ� �Լ�
int maxxx(int a, int b) {
	if (a > b) return a;
	else if (b > a) return b;
	else return 0;
}

//main > ������(�����������) �Լ�
int main() {
	//�Լ�
	//voidtest();
	//voidtest2(10);
	//voidtest3(10, 20);

	//double r;
	//printf("��������? "); scanf("%lf", &r);
	
	//area(r);
	//double r = 3.6;
	//double rValue = areaReturn(r);
	//printf("����: %.2f", rValue);

	//int a, b, c;
	//printf("���ڴ�? "); scanf("%d%d%d", &a, &b, &c);
	//printf("�հ��? %d", sum(a, b, c));

	//printf("������: %.2f",division(10, 3));

	printf("ū ����? %d\n", maxxx(27, 58));
	int m = maxxx(57, 57);
	if (m == 0) printf("����");
	else printf("ū���� %d", m);
	
	return 0;
}