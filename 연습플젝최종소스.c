#define _CRT_OBSOLETE_NO_WARNINGS//구식함수 사용 에러 방지
#include <stdio.h>
#include <stdlib.h>// _sleep 함수 선언된 헤더 파일


// 켜지면 1 꺼지면 0

// 자동차 신호 blue 일때 직진, 좌회전 동시에 켜집니다

int car_s_to_n_red = 0;
int car_n_to_s_red = 0;
int car_e_to_w_red = 0;
int car_w_to_e_red = 0;

int car_s_to_n_blue = 0;
int car_n_to_s_blue = 0;
int car_e_to_w_blue = 0;
int car_w_to_e_blue = 0;


// 보행자 신호
int people_e_red = 0;
int people_w_red = 0;
int people_n_red = 0;
int people_s_red = 0;

int people_e_blue = 0;
int people_w_blue = 0;
int people_n_blue = 0;
int people_s_blue = 0;


void print(void) {

	// 신호등 빨간불 파란불 켜지는 상황 출력해주는 함수 입니다



	printf("\t\t빨간불\t파란불\n");
	printf("자동차(남->북)\t%d\t%d\n", car_s_to_n_red, car_s_to_n_blue);
	printf("자동차(북->남)\t%d\t%d\n", car_n_to_s_red, car_n_to_s_blue);
	printf("자동차(서->동)\t%d\t%d\n", car_w_to_e_red, car_w_to_e_blue);
	printf("자동차(동->서)\t%d\t%d\n", car_e_to_w_red, car_e_to_w_blue);
	printf("보행자(동)\t%d\t%d\n", people_e_red, people_e_blue);
	printf("보행자(서)\t%d\t%d\n", people_w_red, people_w_blue);
	printf("보행자(남)\t%d\t%d\n", people_s_red, people_s_blue);
	printf("보행자(북)\t%d\t%d\n\n", people_n_red, people_n_blue);


}

int main() {




	while (1) {

		if (car_s_to_n_blue == 1 ) {

			_sleep(3000);

			car_s_to_n_red = 1;
			car_n_to_s_red = 0;
			car_e_to_w_red = 1;
			car_w_to_e_red = 1;

			car_s_to_n_blue = 0;
			car_n_to_s_blue = 1;
			car_e_to_w_blue = 0;
			car_w_to_e_blue = 0;
			
			people_e_red = 1;
			people_w_red = 0;
			people_n_red = 1;
			people_s_red = 1;

			people_e_blue = 0;
			people_w_blue = 1;
			people_n_blue = 0;
			people_s_blue = 0;

			print();


		}

		else if (car_n_to_s_blue == 1) {

			_sleep(3000);

			car_s_to_n_red = 1;
			car_n_to_s_red = 1;
			car_e_to_w_red = 1;
			car_w_to_e_red = 0;

			car_s_to_n_blue = 0;
			car_n_to_s_blue = 0;
			car_e_to_w_blue = 0;
			car_w_to_e_blue = 1;

			people_e_red = 1;
			people_w_red = 1;
			people_n_red = 1;
			people_s_red = 0;

			people_e_blue = 0;
			people_w_blue = 0;
			people_n_blue = 0;
			people_s_blue = 1;

			print();

		}

		else if (car_w_to_e_blue == 1) {

			_sleep(3000);

			car_s_to_n_red = 1;
			car_n_to_s_red = 1;
			car_e_to_w_red = 0;
			car_w_to_e_red = 1;

			car_s_to_n_blue = 0;
			car_n_to_s_blue = 0;
			car_e_to_w_blue = 1;
			car_w_to_e_blue = 0;

			people_e_red = 1;
			people_w_red = 1;
			people_n_red = 0;
			people_s_red = 1;

			people_e_blue = 0;
			people_w_blue = 0;
			people_n_blue = 1;
			people_s_blue = 0;
			
			print();

		}

		else {

			_sleep(3000);

			car_s_to_n_red = 0;
			car_n_to_s_red = 1;
			car_e_to_w_red = 1;
			car_w_to_e_red = 1;

			car_s_to_n_blue = 1;
			car_n_to_s_blue = 0;
			car_e_to_w_blue = 0;
			car_w_to_e_blue = 0;

			people_e_red = 0;
			people_w_red = 1;
			people_n_red = 1;
			people_s_red = 1;

			people_e_blue = 1;
			people_w_blue = 0;
			people_n_blue = 0;
			people_s_blue = 0;

			print();

		}


	}
		



	return 0;

}