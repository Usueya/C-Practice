#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//������ ����(�ּҰ�:4byte)
	//int a = 10; //4byte
	//int * p = &a;
	//printf("a��:%d,        a�ּ�:%p\n", a, &a);
	//printf("p�ּ�:%p p��:%d\n", p, *p);
	//char c = '%'; //1byte
	//char * p2 = &c;
	//printf("c��: %c,        *p2��:%c\n", c, *p2);
	//double d = 3.14; //8byte
	//double * p3 = &d;
	//printf("d��:%.2f,      d�ּ�:%p\n", d, &d);
	//printf("d��:%.2f,      *d��:%.2f\n", d, *p3);
	//float f = 5.55f; //4byte, f�� �ٿ��� �Ǽ��� 4����Ʈ float������
	//float * p4 = &f;

	//�����ͺ��� p�� �̿��Ͽ� a�� ���� b�� ���� ���
	//int a = 10, b = 20;
	//int* p = &a;
	//printf("a����:%d\n", *p);
	//p = &b;
	//printf("b����:%d\n", *p);

	//a=10,b=20, c=30 �϶�, base=100�� �� ������ ���ض�. �����ͺ����̿�
	//int a = 10, b = 20, c = 30, base = 100;;
	//int* p = &a;
	//*p += base;
	//printf("a����:%d\n", *p);
	//p = &b;
	//*p += base;
	//printf("b����:%d\n", *p);
	//p = &c;
	//*p += base;
	//printf("c����:%d\n", *p);

	//�迭�� ������
	//int arr[3] = { 10,20,30 };
	//int* p = arr; 
	//�迭���̸��� �ּ� p=arr
	//�ε���0���ּ�:100 > P    >> *P = 10 = arr[0]
	//�ε���1���ּ�:104 > P+1  >> *P+1 = 20 = arr[1]
	//�ε���2���ּ�:108 > P+2  >> *P+2 = 30 = arr[2]
	//printf("%d\n", *p);
	//printf("%d\n", *(p+1));
	//printf("%d\n", *(p+2));

	//�ݺ��� forȰ��
	//printf("for���� �̿��ϱ�\n");
	//for (int i = 0; i < 3; i++) {
	//	printf("%d %d %d %d\n", *(p + i), *(arr+i), arr[i], p[i]);
	//}

	//���������� Ȱ��
	//for (int i = 0; i < 3; i++) {
	//	printf("%d\n", *p++);
	//	//p++; > �����̱� ������ ����. ������ �̵��� �ӵ��� �� ����;
	//	//��, arr++�� �Ұ�. arr�迭�� ����Ű�� ���������
	//}

	//������ �迭�� ������
	//char arr[6] = { 'p','y','t','h','o','n' };
	//char* p = arr;
	//for (int i = 0; i < 6; i++) {
	//	printf("%c ", *p++);
	//}

	//�Ǻ���ġ������ �����͸� �̿��� ����ϱ�
	//int fibo[20];
	//int* p = fibo;
	//fibo[0] = 0; fibo[1] = 1;
	//
	//for (int i = 2; i < 20; i++) {
	//	*(p+i) = *(p+i-2) + *(p+i-1);
	//	printf("%d\n", *(p + i));
	//}
	
	//�Ǻ���ġ Ǯ��)
	int fibo[20]; int* p = fibo; //>>����p�ּҴ� �ε���[0]�� ����Ŵ
	*p = 0; p++; //>>�ε���[0]�� 0�� �ְ� p�ּҸ� �ε���[1]�� ����Ŵ
	*p = 1; p++; //>>�ε���[1]�� 1�� �ְ� p�ּҸ� �ε���[2]�� ����Ŵ
	for (int i = 2; i < 20; i++) {
		*p = *(p - 2) + *(p - 1);
		p++;
	}
	p = fibo; //������ ������ ��ġ�� �ε���[19]�� ����Ŵ���� ÷��ġ�� �ʱ�ȭ
	for (int i = 0; i < 20; i++) {
		printf("%d ", *p);
		p++;
	}

		return 0;
}