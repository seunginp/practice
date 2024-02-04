#include<stdio.h>


void printarr(int parr[]) {
	for (int i = 0; i < 4; i++) {
		printf("%d ", &parr[i]);
		printf("%d ", parr[i]);
		parr[i]++;
	}
}

//충돌해결하기 !!

int main() {

	int arr[4] = { 1,2,3,4 };

	printarr(arr);

	for (int i = 0; i < 4; i++) {
		printf("%d ", *(arr + i));
	}

	return 0;
}


//오늘의 기분은 좋다 ㅎㅎ 