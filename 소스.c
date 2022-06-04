#include <stdio.h>


int main(void) {
	//자동차 세로 직진신호

	int length_straight = 0;

	//자동차 가로 직진신호

	int width_straight = 0;


	//자동차 세로 좌회전신호

	int length_left = 0;


	//자동차 가로 좌회전신호

	int width_left = 0;



	while (width_left<4) {
		for (length_straight = 0; length_straight < 4; length_straight++) {
			printf("자동차 세로 직진신호입니다");
		}

		for (width_straight = 0;  width_straight < 4;  width_straight++) {
			printf("자동차 가로 직진신호입니다");
		}

		for (length_left = 0; length_left < 4; length_left++) {
			printf("자동차 세로 좌회전신호입니다");
		}

		for (width_left = 0;  width_left < 4;  width_left++) {
			printf("자동차 가로 좌회전신호입니다");
		}

	}
	





}