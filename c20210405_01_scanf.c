#define _CRT_SECURE_NO_WARNINGS //scanf�Լ��� ����ϱ� ���ؼ� ����

#include <stdio.h>
int main() {
	//�Է��Լ�
	
	//������ �Է¹��
	//int a;
	//printf("������?");scanf("%d",&a);
	////&a:����a�� �ּ�
	////%d����%f�Ҽ�%c�����ϳ�%s���ڿ�%p�ּ�
	//printf("�Է��� �� : %d  �ּ� : %p\n", a, &a);

	//�Ǽ��� �Է¹�� float 4byte
	//float f;
	//printf("�Ǽ���? "); scanf("%f", &f);
	//printf("�Է��� ���� %f�Դϴ�.\n", f);
	//�����: 3.14000

	//�Ǽ��� �Է¹�� double 8byte �������� �Է¹޴� ���ĵ� ������ ��������lf
	//double d;
	//printf("�Ǽ���? "); scanf("%lf", &d);
	//printf("�Է��� ���� %f�Դϴ�.\n", d);
	//printf("�Է��� ���� �ּҴ� %p�Դϴ�.\n", &d);
	////%f�����: -9255960443199147... 
	////%lf�����: 3.14000
	////%p�����: 00B3F96C >  �� 4byte

	//������ �Է¹��
	//char c;
	//printf("���ڴ�?");
	//scanf("%c", &c);
	//printf("�Է��� ���ڴ� %c\n", c);

	//�ǽ�) �� ������ �Է¹޾� �հ踦 ����ض�
	//int a, b;
	//printf("ù��° ���ڴ�?"); scanf("%d", &a);
	//printf("�ι�° ���ڴ�?"); scanf("%d", &b);
	//printf("%d + %d = %d\n", a, b, a + b);

	//printf("�� ����?");
	//scanf("%d %d", &a, &b); //���� �Ǵ� ���� 
	//printf("�հ�:%d\n", a + b);

	//�ǽ�)������ ��¥(��,��,��)�� �Է¹޾� ����ϱ�
	//int year, month, day;
	//printf("�⵵:"); scanf("%d", &year);
	//printf("��:"); scanf("%d", &month);
	//printf("��:"); scanf("%d", &day);
	//printf("������ %d�� %d�� %d�� �Դϴ�.", year, month, day);

	//printf("�����?(yyyy-mm-dd:"); scanf("%d%d%d", &year, &month, &day);
	//printf("������ %d�� %d�� %d�� �Դϴ�.", year, month, day);

	//�ǽ�) �ΰ��� ������ �Է¹޾� ������� ���ϱ�
	//int a, b;
	//printf("�ΰ��� ����:");	scanf("%d%d", &a, &b);
	//printf("%d + %d = %d\n", a + b);
	//printf("%d - %d = %d\n", a - b);
	//printf("%d * %d = %d\n", a * b);
	//printf("%d / %d = %f\n", (double)a / b);
	//*������ ������ ������ �Ǽ��� ������ ���� ��� (double�� �Ǽ��� ��ȯ �ʿ�)

	//����ó�� ����
	//int a, b;
	//char sign;
	//printf("������?");	
	//scanf("%d%c%d", &a, &sign, &b);
	//printf("%d %c %d\n", a, sign, b);
	////���͵� �ƽ�Ű�ڵ尪�� ����>���ڷ� �ν�
	////getchar(); //�ѹ��ڸ� �о ��ȯ�ϴ� �Լ�, ����ó���� ���� ����

	//�ǽ�)���� ���� �� �Ž������� ����Ͽ� ����ϴ� ���α׷�
	//�� ���ǰ��� ������ ���� �Է��� �޴´�.(���׿����� Ȱ��)
	//int a, b;
	//printf("���ǰ�?"); scanf("%d", &a);
	//printf("������ �ݾ�?"), scanf("%d", &b);
	//a < b? 
	//	printf("�Ž����� : %d", b - a): 
	//	a == b ? 
	//		printf("���Ϸ�") : printf("�߰����� : %d", a - b);

	//�ǽ�) ����, ����, ���� ������ �Է� �޾� �հ�� ����� ���ض�!
	//int kor, eng, mat;
	//printf("��������?"); scanf("%d", &kor);
	//printf("��������?"); scanf("%d", &eng);
	//printf("��������?"); scanf("%d", &mat);
	////scanf("%d%d%d", &kor, &eng, &mat)
	//int sum = kor + eng + mat;
	//printf("�հ� : %d \n��� : %.2f", sum, (double)sum/3);
	////*(kor + eng + mat)/3.)

	//�ǽ�)rgb �� �����
	//unsigned int ������ ���� int 4byte
	//int r, g, b;
	//printf("r��?"); scanf("%d", &r);
	//printf("g��?"); scanf("%d", &g);
	//printf("b��?"); scanf("%d", &b);

	//unsigned int rgb = r<<16 | g<<8 | b ; //r�� �������� 16bit �̷�ٴ� ��
	//printf("RGB: %0X", rgb);
	////%0x 16������ ǥ���ϴ� ��������

	return 0;
	//���������� ����Ǹ� 0�� ��Ÿ��
}