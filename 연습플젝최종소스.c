#define _CRT_OBSOLETE_NO_WARNINGS//�����Լ� ��� ���� ����
#include <stdio.h>
#include <stdlib.h>// _sleep �Լ� ����� ��� ����


// ������ 1 ������ 0

// �ڵ��� ��ȣ blue �϶� ����, ��ȸ�� ���ÿ� �����ϴ�

int car_s_to_n_red = 0;
int car_n_to_s_red = 0;
int car_e_to_w_red = 0;
int car_w_to_e_red = 0;

int car_s_to_n_blue = 0;
int car_n_to_s_blue = 0;
int car_e_to_w_blue = 0;
int car_w_to_e_blue = 0;


// ������ ��ȣ
int people_e_red = 0;
int people_w_red = 0;
int people_n_red = 0;
int people_s_red = 0;

int people_e_blue = 0;
int people_w_blue = 0;
int people_n_blue = 0;
int people_s_blue = 0;


void print(void) {

	// ��ȣ�� ������ �Ķ��� ������ ��Ȳ ������ִ� �Լ� �Դϴ�



	printf("\t\t������\t�Ķ���\n");
	printf("�ڵ���(��->��)\t%d\t%d\n", car_s_to_n_red, car_s_to_n_blue);
	printf("�ڵ���(��->��)\t%d\t%d\n", car_n_to_s_red, car_n_to_s_blue);
	printf("�ڵ���(��->��)\t%d\t%d\n", car_w_to_e_red, car_w_to_e_blue);
	printf("�ڵ���(��->��)\t%d\t%d\n", car_e_to_w_red, car_e_to_w_blue);
	printf("������(��)\t%d\t%d\n", people_e_red, people_e_blue);
	printf("������(��)\t%d\t%d\n", people_w_red, people_w_blue);
	printf("������(��)\t%d\t%d\n", people_s_red, people_s_blue);
	printf("������(��)\t%d\t%d\n\n", people_n_red, people_n_blue);


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