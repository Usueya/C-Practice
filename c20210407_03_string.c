#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	//문자형 함수
	//char c;
	//scanf("%c", &c);
	//printf("문자: %c\n", c);

	//에코기능O(키보드로입력한걸 버퍼에담아서 그대로 콘솔창에 보이는 것)
	//char c = getchar(); //문자입력전용(포멧문자가 필요x)
	//printf("입력문자: %c, %d\n", c, c);
	//putchar(c); //문자출력전용함수

	//에코기능X(엔터가 없어도 바로 받아드림)
	//getch()함수
	//char c = getch();
	//printf("입력문자: ");
	//putchar(c);

	//비밀번호 입력하면 *로 출력하는 법!
	//char pw[5];
	//printf("패스워드를 입력해주세요. ");
	//for (int i = 0; i < 4; i++) {
	//	pw[i] = getch();
	//	putchar('*');
	//}
	//pw[4] = '\0'; //문자열의 마지막을 나타냄
	//printf("\n비밀번호: %s\0", pw);

	//문자열은 문자형을 조합하여 생성!
	//char s[] = "hello"; //+1byte로 끝에 null값(\0)이 들어감
	//printf("%s\n", s);

	//문자형 입력받기
	//char s[6];
	//scanf("%s",s) //배열의 이름은 주소를 뜻함

	//문자열 전용 함수(공백포함한 엔터까지의 내용을 출력. 단, scanf는 공백은 못읽음)
	//char name[20];
	//printf("이름은? ");
	//gets(name);
	//printf("당신의 이름은 "); puts(name);

	//문자열 전용함수 예시
	//char name[10] = "hong";
	//name = "kim"; //불가
	//문자열 관련 함수를 쓰려면 헤더함수 추가 필요 #include <string.h>
	//strcpy(name,"kim");
	//puts(name);

	//실습) 문자열 입력받고(gets) 문자의 값(puts)과 길이와 주소값 출력
	//printf("문자를 입력하세요. ");
	//char name[20];
	//gets(name);
	//printf("값: "); puts(name);
	//int size = sizeof(name) / sizeof(char);
	//printf("길이: %d\n", size); 
	//printf("주소: %p\n", name);


	//피보나치의 수열
	//인덱스값  0 1 2 3 4 5 6 7  8  9 ...
	//결과값    0 1 1 2 3 5 8 13 21 34 ...


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