#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�ݺ���: while
	//1:True 0:false
	//�����ϴ� ����� ������ �̿��� false�� �ٲٰų�, break�� ������ ��

	//while (1) {
	//	printf("c!!!!!!!");
	//}

	//10����� ������ ���
	//int cnt = 0;
	//while (1) {
	//	printf("%d c!!!!\n", cnt+1);
	//	cnt += 1; //cnt++//cnt=cnt+1;�����ǹ�
	//	if (cnt > 9) break;
	//}

	////1���� 10������ ��
	//int a=0; //�����ϴ� ����
	//int sum=0; //�հ踦 �����ϴ� ����
	//while (a<10) {
	//	//printf("%d\n", ++a);
	//	//a++; sum = sum + a;
	//	sum += ++a;
	//}
	//printf("�հ�:%d\n", sum);

	//�հ谡 2000�� �Ѵ� ������ �� ���� ���϶�
	//1 2 3 4 5 ... �ϳ��� �����ϴ� ���� �ʿ�
	//���� ���� ��Ÿ���� ���� �ʿ� 1 3 6 10 ...
	//1)
	//int a =0, sum = 0;
	//while (1) {
	//	++a;
	//	sum = sum + a;
	//	if (sum > 2000) break;
	//}
	//printf("����:%d\n�հ�:%d\n", a, sum);
	//2)Ǯ�� 2000���� Ŀ���� break
	//while (sum < 2000) {
	//	a++;
	//	sum = sum + a;
	//}
	//printf("%d,%d", a, sum);

	//�ǽ�, 1���� 20������ �� �� 3�� ����� ����ϴ� ���α׷� 3 6 9 12 ...
	//1)
	//int a = 0;
	//while (a < 20) {
	//	a++;
	//	if (a % 3 == 0)
	//		printf("%d\n", a);
	//}
	//2) ������ 3�� �����ϴ� ���ڷ� ��� ��
	//int a = 3;
	//while (a < 20) {
	//	printf("%d ", a);
	//	a += 3;
	//}
	//3)break Ȱ��
	//int a = 0;
	//while (1) {
	//	a += 3;
	//	if (a > 20) break;
	//	printf("%d\n", a);
	//}
	//4)continue Ȱ��
	//int a = 0;
	//while (a < 10) {
	//	a++;
	//	if (a % 2 != 0) continue;
	//	printf("%d ", a);
	//}
	
	return 0;
}
















