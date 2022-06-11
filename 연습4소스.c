#define _CRT_OBSOLETE_NO_WARNINGS//구식함수 사용 에러 방지
#include <stdio.h>
#include <stdlib.h>// _sleep 함수 선언된 헤더 파일

int main() {


	// 신호등 하나에 대해서만 구현
	// 켜지면 1 꺼지면 0

	int red = 0;
	int yellow = 0;
	int blue = 0;
	// 빨 => 노 => 파
	
	while (1) {
		if (red == 1) {
			_sleep(3000);
			yellow = 1;
			blue = 0;
			red = 0;
			printf("빨간불/노란불/파란불\n%d\t%d\t%d\n", red, yellow, blue);
		} else if (yellow == 1) {
			_sleep(3000);
			red = 0;
			blue = 1;
			yellow = 0;
			printf("빨간불/노란불/파란불\n%d\t%d\t%d\n", red, yellow, blue);
		}else {
			_sleep(3000);
			red = 1;
			blue = 0;
			yellow = 0;
			printf("빨간불/노란불/파란불\n%d\t%d\t%d\n", red, yellow, blue);
		}
		
	}
	return 0;

}