#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//���ڿ��� ������
	//char str[] = "happy"; //null���ڱ��� 
	////str = "angry"; // str�� ����̱⶧���� ����Ұ�
	//char* p = str;
	//printf("%s", p);
	//p = "python"; //p�� ������ �ٸ��ָ� ����ų �� ����.
	//puts(p); //���ڿ� �����Լ�

	//�ǽ�)�̸��� 1�� �Է¹ް� ���
	char name[10];
	char* p = name;
	while (1) {
		printf("�̸���? ");
		gets_s(p, sizeof(name));
		if (name[0] == 'q') break;
		//puts(p);
		//printf("�� ȯ���մϴ�.\n");
		printf("%s�� ȯ���մϴ�.\n", p);
		printf("-----------------------\n", p);
	}
	return 0;
}