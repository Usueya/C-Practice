#include <stdio.h>

int main() {
	//������(+,-,*,/,%)
	//������ ������ ����
	//�Ǽ��� ������ �Ǽ�

	//int a = 20, b = 3;
	//printf("%d + %d = %d\n", a, b, a + b);
	//printf("%d - %d = %d\n", a, b, a - b);
	//printf("%d * %d = %d\n", a, b, a * b);
	//printf("%d / %d = %.1f\n", a, b, (double)a / b);
	//printf("%d %% %d = %d\n", a, b, a % b);

	//�ǽ� a = 50, b = 3 �ϋ�,
	//int a = 50, b = 3;
	//printf("�� : %d\n", a / b);
	//printf("������ %d\n", a % b);
	//printf("���� �Ǽ��� : %.2f\n", (double)a / b);

	//���׿�����
	//++,-- ���� �տ� ���̸� ����, �ڿ� ���̸� ����
	//int a = 10;
	//a++; // a = a + 1; // a += 1;
	//printf("%d\n", a);
	//a--;//a -= 1;// a = a - 1;
	//printf("%d\n", a);

	//
	//int a = 10;
	//printf("%d\n", a++); //����:������ϰ�����
	//printf("%d\n", a); //���� a�� 11�� �ٲ�
	//printf("%d\n", ++a); //����:�����ϰ����

	//
	//int a = 10;
	//a--;
	//printf("%d\n", --a);
	//printf("%d\n", a++);
	//printf("%d\n", a--);
	//printf("%d\n", a);

	//
	//int a = 10;
	//int b = --a;
	//int c = b++;
	//b = ++a;
	//printf("%d\n", a);
	//printf("%d\n", b);
	//printf("%d\n", c);

	//���迬����
	//int a = 10, b = 20;
	//printf("%d\n", a < b); // 1 : true
	//printf("%d\n", a > b); // 0 : false
	//printf("%d\n", a == b); // 0 : false
	//printf("%d\n", a != b); // 1 : true

	//�������� and=&&,  or=||,  not=!
	//int a = 10, b = 20;
	//printf("%d\n", a > 0 && b > 0); //true(1)+true(1) = true(1)
	//printf("%d\n", a > 0 && b < 0); //true(1)+false(0) = false(0)
	//printf("%d\n", a > 0 || b < 0); //true(1)+false(0) = true(1)
	//printf("%d\n", !(a > 0)); //false(0)

	//��Ʈ������: &, |. ~, ^
	//printf("%d\n", 4 & 3);
	//printf("%d\n", 4 | 3);

	//���� ������
	//int a = -10;
	//a > 0 ? printf("���") : printf('����');

	//�� ���� ū ���� ���
	//int a = 10, b = 20;
	//a>b? printf("%d", a) : printf("%d", b);

	//20,10,30�� 3���� ������ �־����� �� ���� ū ���� ���ϴ� ���α׷�(���׿�����)
	//int a = 20, b = 10, c = 30;
	//int max = a > b ? a : b;
	//max = max > c ? max : c;
	//printf("%d", max);	
	//int max = a > b ? (a > c ? a : c) : (b > c ? b : c);
	//printf("%d\n", max);

	//�־��� ������ ¦/Ȧ�� ������
	//int a = 6, b = 9;
	//a % 2 == 0 ? printf("%d�� ¦���Դϴ�.\n",a) : printf("%d�� Ȧ���Դϴ�.\n", a);
	//b % 2 == 0 ? printf("%d�� ¦���Դϴ�.\n",b) : printf("%d�� Ȧ���Դϴ�.\n",b);

	//�����ͺ����� �̿��� ¦/Ȧ��
	//int a = 6; 
	//char* p = a % 2 == 0 ? "¦��" : "Ȧ��"; //p�����ͺ����� ���ڸ� ���
	//printf("%d�� %s\n", a, p); //%s�� p���ּҸ� ã�� ������ �Ѱ���














}