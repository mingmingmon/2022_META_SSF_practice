#define _CRT_OBSOLETE_NO_WARNINGS//�����Լ� ��� ���� ����
#include <stdio.h>
#include <stdlib.h>// _sleep �Լ� ����� ��� ����

int main() {


	// ��ȣ�� �ϳ��� ���ؼ��� ����
	// ������ 1 ������ 0

	int red = 0;
	int yellow = 0;
	int blue = 0;
	// �� => �� => ��
	
	while (1) {
		if (red == 1) {
			_sleep(3000);
			yellow = 1;
			blue = 0;
			red = 0;
			printf("������/�����/�Ķ���\n%d\t%d\t%d\n", red, yellow, blue);
		} else if (yellow == 1) {
			_sleep(3000);
			red = 0;
			blue = 1;
			yellow = 0;
			printf("������/�����/�Ķ���\n%d\t%d\t%d\n", red, yellow, blue);
		}else {
			_sleep(3000);
			red = 1;
			blue = 0;
			yellow = 0;
			printf("������/�����/�Ķ���\n%d\t%d\t%d\n", red, yellow, blue);
		}
		
	}
	return 0;

}