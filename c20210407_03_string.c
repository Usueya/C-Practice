#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	//������ �Լ�
	//char c;
	//scanf("%c", &c);
	//printf("����: %c\n", c);

	//���ڱ��O(Ű������Է��Ѱ� ���ۿ���Ƽ� �״�� �ܼ�â�� ���̴� ��)
	//char c = getchar(); //�����Է�����(���乮�ڰ� �ʿ�x)
	//printf("�Է¹���: %c, %d\n", c, c);
	//putchar(c); //������������Լ�

	//���ڱ��X(���Ͱ� ��� �ٷ� �޾Ƶ帲)
	//getch()�Լ�
	//char c = getch();
	//printf("�Է¹���: ");
	//putchar(c);

	//��й�ȣ �Է��ϸ� *�� ����ϴ� ��!
	//char pw[5];
	//printf("�н����带 �Է����ּ���. ");
	//for (int i = 0; i < 4; i++) {
	//	pw[i] = getch();
	//	putchar('*');
	//}
	//pw[4] = '\0'; //���ڿ��� �������� ��Ÿ��
	//printf("\n��й�ȣ: %s\0", pw);

	//���ڿ��� �������� �����Ͽ� ����!
	//char s[] = "hello"; //+1byte�� ���� null��(\0)�� ��
	//printf("%s\n", s);

	//������ �Է¹ޱ�
	//char s[6];
	//scanf("%s",s) //�迭�� �̸��� �ּҸ� ����

	//���ڿ� ���� �Լ�(���������� ���ͱ����� ������ ���. ��, scanf�� ������ ������)
	//char name[20];
	//printf("�̸���? ");
	//gets(name);
	//printf("����� �̸��� "); puts(name);

	//���ڿ� �����Լ� ����
	//char name[10] = "hong";
	//name = "kim"; //�Ұ�
	//���ڿ� ���� �Լ��� ������ ����Լ� �߰� �ʿ� #include <string.h>
	//strcpy(name,"kim");
	//puts(name);

	//�ǽ�) ���ڿ� �Է¹ް�(gets) ������ ��(puts)�� ���̿� �ּҰ� ���
	//printf("���ڸ� �Է��ϼ���. ");
	//char name[20];
	//gets(name);
	//printf("��: "); puts(name);
	//int size = sizeof(name) / sizeof(char);
	//printf("����: %d\n", size); 
	//printf("�ּ�: %p\n", name);


	//�Ǻ���ġ�� ����
	//�ε�����  0 1 2 3 4 5 6 7  8  9 ...
	//�����    0 1 1 2 3 5 8 13 21 34 ...


	int fibo[20];
	fibo[0] = 0; fibo[1] = 1;

	for (int i = 2; i < 10; i++) {
		fibo[i] = fibo[i - 2] + fibo[i - 1];
	}

	for (int i = 0; i < 20; i++) {
		printf("%d\n", fibo[i]);
	}

	return 0;

}