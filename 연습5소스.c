#define _CRT_OBSOLETE_NO_WARNINGS//구식함수 사용 에러 방지
#include <stdio.h>
#include <stdlib.h>// _sleep 함수 선언된 헤더 파일

int main() {


	
	// 켜지면 1 꺼지면 0

	int red = 0;
	int yellow = 0;
	int blue = 0;
	int left_blue = 0;
	// 빨 => 노 => 파


	//자동차 세로 신호등(자동차신호등1 빨간불)
	int car_length_red= 0;

	//자동차 세로 신호등(자동차신호등1 파란불)
	int car_length_blue = 0;

	//자동차 세로 신호등(자동차신호등1 좌회전)
	int car_length_left_blue = 0;

	//자동차 가로 직진신호(자동차신호등2 빨간불)
	int car_width_red = 0;

	//자동차 가로 직진신호(자동차신호등2 파란불)
	int car_width_blue = 0;

	//자동차 가로 직진신호(자동차신호등2 좌회전)
	int car_width_left_blue = 0;

	//보행자 신호 빨간불
	int people_red = 0;

	//보행자 신호 파란불
	int people_blue = 0;
	
	int i;
	  
	for (i = 0; i < 11;i++) {
		if (car_length_blue == 1) {
			_sleep(3000);
			car_length_red = 1;
			car_width_blue = 1;
			people_red = 1;
			car_length_blue = 0;
			car_width_red = 0;
			car_length_left_blue = 0;
			car_width_left_blue = 0;
			people_blue = 0;
			printf("\t\t빨간불\t파란불\t좌회전신호\n자동차세로\t%d\t%d\t%d\n자동차가로\t%d\t%d\t%d\n보행자\t\t%d\t%d\n\n", car_length_red, car_length_blue, car_length_left_blue, car_width_red, car_width_blue, car_width_left_blue, people_red, people_blue);
		}
		else if (car_width_blue == 1) {
			_sleep(3000);
			car_length_red = 1;
			car_width_red = 1;
			people_blue = 1;
			car_length_blue = 0;
			car_width_blue = 0;
			car_length_left_blue = 0;
			car_width_left_blue = 0;
			people_red = 0;
			printf("\t\t빨간불\t파란불\t좌회전신호\n자동차세로\t%d\t%d\t%d\n자동차가로\t%d\t%d\t%d\n보행자\t\t%d\t%d\n\n", car_length_red, car_length_blue, car_length_left_blue, car_width_red, car_width_blue, car_width_left_blue, people_red, people_blue);
		}
		else if (people_blue == 1) {
			_sleep(3000);
			car_length_left_blue = 1;
			car_width_red = 1;
			people_red = 1;
			car_length_blue = 0;
			car_width_blue = 0;
			car_length_red = 0;
			car_width_left_blue = 0;
			people_blue = 0;
			printf("\t\t빨간불\t파란불\t좌회전신호\n자동차세로\t%d\t%d\t%d\n자동차가로\t%d\t%d\t%d\n보행자\t\t%d\t%d\n\n", car_length_red, car_length_blue, car_length_left_blue, car_width_red, car_width_blue, car_width_left_blue, people_red, people_blue);
		}

		else if (car_length_left_blue==1) {
			_sleep(3000);
			car_length_red = 1;
			car_width_left_blue = 1;
			people_red = 1;
			car_length_blue = 0;
			car_width_red = 0;
			car_length_left_blue = 0;
			car_width_blue = 0;
			people_blue = 0;
			printf("\t\t빨간불\t파란불\t좌회전신호\n자동차세로\t%d\t%d\t%d\n자동차가로\t%d\t%d\t%d\n보행자\t\t%d\t%d\n\n", car_length_red, car_length_blue, car_length_left_blue, car_width_red, car_width_blue, car_width_left_blue, people_red, people_blue);
		}

		else {
			_sleep(3000);
			car_length_blue = 1;
			car_width_red = 1;
			people_red = 1;
			car_length_left_blue = 0;
			car_width_left_blue= 0;
			car_length_red = 0;
			car_width_blue = 0;
			people_blue = 0;
			printf("\t\t빨간불\t파란불\t좌회전신호\n자동차세로\t%d\t%d\t%d\n자동차가로\t%d\t%d\t%d\n보행자\t\t%d\t%d\n\n", car_length_red, car_length_blue, car_length_left_blue, car_width_red, car_width_blue, car_width_left_blue, people_red, people_blue);
		}
		i++;
	}
	return 0;

}