#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//반복문: while
	//1:True 0:false
	//종료하는 방법은 조건을 이용해 false로 바꾸거나, break를 만나는 법

	//while (1) {
	//	printf("c!!!!!!!");
	//}

	//10번찍고 나오는 방법
	//int cnt = 0;
	//while (1) {
	//	printf("%d c!!!!\n", cnt+1);
	//	cnt += 1; //cnt++//cnt=cnt+1;같은의미
	//	if (cnt > 9) break;
	//}

	////1부터 10까지의 합
	//int a=0; //증가하는 변수
	//int sum=0; //합계를 저장하는 변수
	//while (a<10) {
	//	//printf("%d\n", ++a);
	//	//a++; sum = sum + a;
	//	sum += ++a;
	//}
	//printf("합계:%d\n", sum);

	//합계가 2000을 넘는 정수와 그 합을 구하라
	//1 2 3 4 5 ... 하나씩 증가하는 변수 필요
	//더한 값을 나타내는 변수 필요 1 3 6 10 ...
	//1)
	//int a =0, sum = 0;
	//while (1) {
	//	++a;
	//	sum = sum + a;
	//	if (sum > 2000) break;
	//}
	//printf("숫자:%d\n합계:%d\n", a, sum);
	//2)풀이 2000보다 커지면 break
	//while (sum < 2000) {
	//	a++;
	//	sum = sum + a;
	//}
	//printf("%d,%d", a, sum);

	//실습, 1부터 20까지의 수 중 3의 배수만 출력하는 프로그램 3 6 9 12 ...
	//1)
	//int a = 0;
	//while (a < 20) {
	//	a++;
	//	if (a % 3 == 0)
	//		printf("%d\n", a);
	//}
	//2) 변수를 3씩 증가하는 숫자로 찍는 법
	//int a = 3;
	//while (a < 20) {
	//	printf("%d ", a);
	//	a += 3;
	//}
	//3)break 활용
	//int a = 0;
	//while (1) {
	//	a += 3;
	//	if (a > 20) break;
	//	printf("%d\n", a);
	//}
	//4)continue 활용
	//int a = 0;
	//while (a < 10) {
	//	a++;
	//	if (a % 2 != 0) continue;
	//	printf("%d ", a);
	//}
	
	return 0;
}
















