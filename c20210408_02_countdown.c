#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

//매개변수:카운트다운 초//반환값:없음
//목적:카운트 다운 기능을 출력
void cd(int a) {
	printf("카운트 다운 시작!!\n");
	for (int i = a; i >= 0; i--) {
		Sleep(500);
		printf("%d >> ", i);
	}
	printf("\n발사아~~☆\n");
}


int main() {
	//카운트 다운

	//printf("카운트다운시작\n");
	//for (int i = 5; i >= 0; i--) {
	//	Sleep(1000); //밀리초단위 > 1000밀리초 > 1초
	//	printf("%d초\n", i);
	//}
	//printf("발사\n");

	cd(10);



	return 0;
}