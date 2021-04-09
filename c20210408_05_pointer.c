#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//포인터 변수(주소값:4byte)
	//int a = 10; //4byte
	//int * p = &a;
	//printf("a값:%d,        a주소:%p\n", a, &a);
	//printf("p주소:%p p값:%d\n", p, *p);
	//char c = '%'; //1byte
	//char * p2 = &c;
	//printf("c값: %c,        *p2값:%c\n", c, *p2);
	//double d = 3.14; //8byte
	//double * p3 = &d;
	//printf("d값:%.2f,      d주소:%p\n", d, &d);
	//printf("d값:%.2f,      *d값:%.2f\n", d, *p3);
	//float f = 5.55f; //4byte, f를 붙여서 실수의 4바이트 float로적용
	//float * p4 = &f;

	//포인터변수 p를 이용하여 a의 값과 b의 값을 출력
	//int a = 10, b = 20;
	//int* p = &a;
	//printf("a값은:%d\n", *p);
	//p = &b;
	//printf("b값은:%d\n", *p);

	//a=10,b=20, c=30 일때, base=100을 각 변수에 더해라. 포인터변수이용
	//int a = 10, b = 20, c = 30, base = 100;;
	//int* p = &a;
	//*p += base;
	//printf("a값은:%d\n", *p);
	//p = &b;
	//*p += base;
	//printf("b값은:%d\n", *p);
	//p = &c;
	//*p += base;
	//printf("c값은:%d\n", *p);

	//배열의 포인터
	//int arr[3] = { 10,20,30 };
	//int* p = arr; 
	//배열의이름은 주소 p=arr
	//인덱스0의주소:100 > P    >> *P = 10 = arr[0]
	//인덱스1의주소:104 > P+1  >> *P+1 = 20 = arr[1]
	//인덱스2의주소:108 > P+2  >> *P+2 = 30 = arr[2]
	//printf("%d\n", *p);
	//printf("%d\n", *(p+1));
	//printf("%d\n", *(p+2));

	//반복문 for활용
	//printf("for문을 이용하기\n");
	//for (int i = 0; i < 3; i++) {
	//	printf("%d %d %d %d\n", *(p + i), *(arr+i), arr[i], p[i]);
	//}

	//증감연산자 활용
	//for (int i = 0; i < 3; i++) {
	//	printf("%d\n", *p++);
	//	//p++; > 변수이기 때문에 가능. 포인터 이동이 속도가 더 빠름;
	//	//단, arr++는 불가. arr배열을 가리키는 상수임으로
	//}

	//문자형 배열의 포인터
	//char arr[6] = { 'p','y','t','h','o','n' };
	//char* p = arr;
	//for (int i = 0; i < 6; i++) {
	//	printf("%c ", *p++);
	//}

	//피보나치수열을 포인터를 이용해 출력하기
	//int fibo[20];
	//int* p = fibo;
	//fibo[0] = 0; fibo[1] = 1;
	//
	//for (int i = 2; i < 20; i++) {
	//	*(p+i) = *(p+i-2) + *(p+i-1);
	//	printf("%d\n", *(p + i));
	//}
	
	//피보나치 풀이)
	int fibo[20]; int* p = fibo; //>>현재p주소는 인덱스[0]을 가리킴
	*p = 0; p++; //>>인덱스[0]에 0을 넣고 p주소를 인덱스[1]로 가리킴
	*p = 1; p++; //>>인덱스[1]에 1을 넣고 p주소를 인덱스[2]로 가리킴
	for (int i = 2; i < 20; i++) {
		*p = *(p - 2) + *(p - 1);
		p++;
	}
	p = fibo; //마지막 포인터 위치는 인덱스[19]를 가리킴으로 첨위치로 초기화
	for (int i = 0; i < 20; i++) {
		printf("%d ", *p);
		p++;
	}

		return 0;
}