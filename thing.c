#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	int x[5];			//�迭 ����
	int input = 1;		//�Է¹޴� �� ����(0���� ū ������ �ʱ�ȭ)
	int count = 0;		//5�� �Է¹ޱ� ���� ����

	while (count < 5) {	//�迭 5���� �� ä�� �� ����.
		
		if (input <= 0) {					//�Է°��� 0���� ũ�� ������
			printf("\tx[%d] is not larger than 0\n", count);
			printf("\tSo please again input element #%d of array x: ", count);
			scanf("%d", &input);
		}
		else {								//�Է°��� 0���� Ŭ��	(ó���� input�� 1�� �����ؼ� ù �ݺ������� �̰��� ���� ��.)
			printf("Please Input element #%d of array x: ", count);
			scanf("%d", &input);
		}
		

		if (input <= 0) {			//�Է°��� 0���� ũ�� ������ continue
			continue;
		}			

		x[count] = input;			//�Է°��� 0���� ũ�� �迭�� ���� �ְ�
		count++;					//�迭�� ���� �ε��� ���� �Է¹����� ��
	}


	int max = x[0];						//�켱 0��°�� �ִ����� ����
	for (int i = 0; i < 5; i++) {
		if (max < x[i]) {
			max = x[i];					//���� max���� ū ���� ������ max�� �� ������ ����
		}
	}									//max���� �迭�� �ִ��� �ִ�.

	int num;							//�ִ��� �迭��ȣ �����ϱ� ���� ����
	for (int i = 4; 0 <= i; i--) {		
		if (max == x[i]) {
			num = i;
			break;		//�ִ� ã���� �ݺ��� �ٷ� Ż��(�������� �Է¹��� ���� �迭��ȣ�� ������ ����)
		}
	}					//num�� �ִ��� �迭��ȣ�� ������

	printf("The maximum number is %d of x[%d]", max, num);	//�ִ񰪰� �� ���� �迭��ȣ ���

	return 0;
}