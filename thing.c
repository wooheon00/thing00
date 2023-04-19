#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	int x[5];			//배열 선언
	int input = 1;		//입력받는 값 선언(0보다 큰 값으로 초기화)
	int count = 0;		//5개 입력받기 위해 선언

	while (count < 5) {	//배열 5개를 다 채울 때 까지.
		
		if (input <= 0) {					//입력값이 0보다 크지 않을때
			printf("\tx[%d] is not larger than 0\n", count);
			printf("\tSo please again input element #%d of array x: ", count);
			scanf("%d", &input);
		}
		else {								//입력값이 0보다 클때	(처음에 input을 1로 설정해서 첫 반복문에는 이것이 실행 됨.)
			printf("Please Input element #%d of array x: ", count);
			scanf("%d", &input);
		}
		

		if (input <= 0) {			//입력값이 0보다 크지 않으면 continue
			continue;
		}			

		x[count] = input;			//입력값이 0보다 크면 배열에 값을 넣고
		count++;					//배열의 다음 인덱스 값을 입력받으러 감
	}


	int max = x[0];						//우선 0번째를 최댓값으로 선언
	for (int i = 0; i < 5; i++) {
		if (max < x[i]) {
			max = x[i];					//만약 max보다 큰 값이 있으면 max를 그 값으로 갱신
		}
	}									//max에는 배열의 최댓값이 있다.

	int num;							//최댓값의 배열번호 저장하기 위해 선언
	for (int i = 4; 0 <= i; i--) {		
		if (max == x[i]) {
			num = i;
			break;		//최댓값 찾으면 반복문 바로 탈출(마지막에 입력받은 수의 배열번호를 가지기 위해)
		}
	}					//num에 최댓값의 배열번호를 저장함

	printf("The maximum number is %d of x[%d]", max, num);	//최댓값과 그 값의 배열번호 출력

	return 0;
}