#include <stdio.h>
#include <string.h>

struct employee {
	char name[10];
	int year;
	int pay;
};

void main() {
	int i;
	struct employee Lee[4] = {
		{ "����ȣ", 2014, 4200 },
		{ "���ѿ�", 2015, 3300 },
		{ "�̻��", 2015, 3500 },
		{ "�̻��", 2016, 2900 }
	};

	for (i = 0; i<4; i++) {
		printf("\n �̸� : %s", Lee[i].name);
		printf("\n �Ի� : %d", Lee[i].year);
		printf("\n ���� : %d \n", Lee[i].pay);
	}
	getchar();
}