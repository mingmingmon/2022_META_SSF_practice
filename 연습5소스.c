#define _CRT_OBSOLETE_NO_WARNINGS//�����Լ� ��� ���� ����
#include <stdio.h>
#include <stdlib.h>// _sleep �Լ� ����� ��� ����

int main() {


	
	// ������ 1 ������ 0

	int red = 0;
	int yellow = 0;
	int blue = 0;
	int left_blue = 0;
	// �� => �� => ��


	//�ڵ��� ���� ��ȣ��(�ڵ�����ȣ��1 ������)
	int car_length_red= 0;

	//�ڵ��� ���� ��ȣ��(�ڵ�����ȣ��1 �Ķ���)
	int car_length_blue = 0;

	//�ڵ��� ���� ��ȣ��(�ڵ�����ȣ��1 ��ȸ��)
	int car_length_left_blue = 0;

	//�ڵ��� ���� ������ȣ(�ڵ�����ȣ��2 ������)
	int car_width_red = 0;

	//�ڵ��� ���� ������ȣ(�ڵ�����ȣ��2 �Ķ���)
	int car_width_blue = 0;

	//�ڵ��� ���� ������ȣ(�ڵ�����ȣ��2 ��ȸ��)
	int car_width_left_blue = 0;

	//������ ��ȣ ������
	int people_red = 0;

	//������ ��ȣ �Ķ���
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
			printf("\t\t������\t�Ķ���\t��ȸ����ȣ\n�ڵ�������\t%d\t%d\t%d\n�ڵ�������\t%d\t%d\t%d\n������\t\t%d\t%d\n\n", car_length_red, car_length_blue, car_length_left_blue, car_width_red, car_width_blue, car_width_left_blue, people_red, people_blue);
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
			printf("\t\t������\t�Ķ���\t��ȸ����ȣ\n�ڵ�������\t%d\t%d\t%d\n�ڵ�������\t%d\t%d\t%d\n������\t\t%d\t%d\n\n", car_length_red, car_length_blue, car_length_left_blue, car_width_red, car_width_blue, car_width_left_blue, people_red, people_blue);
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
			printf("\t\t������\t�Ķ���\t��ȸ����ȣ\n�ڵ�������\t%d\t%d\t%d\n�ڵ�������\t%d\t%d\t%d\n������\t\t%d\t%d\n\n", car_length_red, car_length_blue, car_length_left_blue, car_width_red, car_width_blue, car_width_left_blue, people_red, people_blue);
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
			printf("\t\t������\t�Ķ���\t��ȸ����ȣ\n�ڵ�������\t%d\t%d\t%d\n�ڵ�������\t%d\t%d\t%d\n������\t\t%d\t%d\n\n", car_length_red, car_length_blue, car_length_left_blue, car_width_red, car_width_blue, car_width_left_blue, people_red, people_blue);
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
			printf("\t\t������\t�Ķ���\t��ȸ����ȣ\n�ڵ�������\t%d\t%d\t%d\n�ڵ�������\t%d\t%d\t%d\n������\t\t%d\t%d\n\n", car_length_red, car_length_blue, car_length_left_blue, car_width_red, car_width_blue, car_width_left_blue, people_red, people_blue);
		}
		i++;
	}
	return 0;

}