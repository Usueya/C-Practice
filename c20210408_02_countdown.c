#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

//�Ű�����:ī��Ʈ�ٿ� ��//��ȯ��:����
//����:ī��Ʈ �ٿ� ����� ���
void cd(int a) {
	printf("ī��Ʈ �ٿ� ����!!\n");
	for (int i = a; i >= 0; i--) {
		Sleep(500);
		printf("%d >> ", i);
	}
	printf("\n�߻��~~��\n");
}


int main() {
	//ī��Ʈ �ٿ�

	//printf("ī��Ʈ�ٿ����\n");
	//for (int i = 5; i >= 0; i--) {
	//	Sleep(1000); //�и��ʴ��� > 1000�и��� > 1��
	//	printf("%d��\n", i);
	//}
	//printf("�߻�\n");

	cd(10);



	return 0;
}