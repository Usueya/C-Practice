#include <stdio.h>

int main() {
	//������(4byte) �������� ����
	//int a; 
	//a = 10; //�ʱ�ȭ
	//printf("%d\n", a);
	
	//�Ǽ���(4byte) ������ ����, double(8byte) > ����� ���� ��Ȯ���� ���̰� ����
	//float f;
	//double d;
	//f = 3.145558745698745622588525; //�ʱ�ȭ
	//d = 3.145558745698745622588525; //�ʱ�ȭ
	//printf("%.20f\n", f);
	//printf("%.20f\n", d);

	//������ char 1byte
	//char c = 'A'; //����� ���ÿ� �ʱ�ȭ
	//printf("���ڴ� %c  %d\n", c, c);

	//���������� ����Ʈ��
	//int a = 100;
	//printf("������: %d\n", sizeof(a)); //sizeof()������
	//float f = 3.14;
	//double d = 3.14;
	//printf("float��: %d, double��: %d\n", sizeof(f), sizeof(d));
	//char c = 'a';
	//printf("char��: %d\n", sizeof(c));

	//���ڿ��� ����x, char�� 1byte, int�� 4byte, double�� 8byte
	//� �����͸� �����Ϸ����ϴµ�, char������ 5���� �ʿ��ϴٴ� �ǹ�
	//�迭�� �̸��� �ּҸ� ������. ������ ���� \0�� �־ �ּҽ���~\0����
	//�迭�� ũ��� ���ڿ��� ũ��+1, ����� ���ÿ� �ʱ�ȭ�ÿ��� �迭�� ũ�� ����
	//char c[] = "hello!!!!!!"; //nul���ڸ� �������� �߰��� �ȴ�.
	//printf("%s",c); //���ڿ��� ����ϱ����� ���乮�� %s, c��� �ּҸ� �Ѱ���.
	//char c[] = "hello";
	////c = "hello"; ����� ������ �Ұ�
	//
	//printf("���ڿ�: %s ������ũ��: %d\n", c, sizeof(c));
	//printf("%c\n", c[0]);

	return 0;
}