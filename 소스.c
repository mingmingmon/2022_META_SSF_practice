#include <stdio.h>


int main(void) {
	//�ڵ��� ���� ������ȣ

	int length_straight = 0;

	//�ڵ��� ���� ������ȣ

	int width_straight = 0;


	//�ڵ��� ���� ��ȸ����ȣ

	int length_left = 0;


	//�ڵ��� ���� ��ȸ����ȣ

	int width_left = 0;



	while (width_left<4) {
		for (length_straight = 0; length_straight < 4; length_straight++) {
			printf("�ڵ��� ���� ������ȣ�Դϴ�");
		}

		for (width_straight = 0;  width_straight < 4;  width_straight++) {
			printf("�ڵ��� ���� ������ȣ�Դϴ�");
		}

		for (length_left = 0; length_left < 4; length_left++) {
			printf("�ڵ��� ���� ��ȸ����ȣ�Դϴ�");
		}

		for (width_left = 0;  width_left < 4;  width_left++) {
			printf("�ڵ��� ���� ��ȸ����ȣ�Դϴ�");
		}

	}
	





}