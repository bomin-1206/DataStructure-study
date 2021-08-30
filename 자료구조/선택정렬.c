/*
선택정렬 : 속도는 느리지만 사람이 이해하기 쉬운 알고리즘

n개의 정수를 입력 받아 오름차순으로 정렬하여 출력하시오.
5
3 6 1 3 4
1 3 3 4 6
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void input(int a[], int cnt) {
	for (int i = 0; i < cnt; i++)
		scanf("%d", &a[i]);
}

void output(int a[], int cnt) {
	for (int i = 0; i < cnt; i++)
		printf("%d ", a[i]);
}

//call by reference
void swap(int* x, int* y) {
	int t = *x;
	*x = *y;
	*y = t;
}

void selectionSort(int a[], int cnt) {
	for (int i = 0; i < cnt - 1; i++) {
		for (int j = i + 1; j < cnt; j++)
			if (a[i] > a[j])//오름차순 5 > 2
				swap(&a[i], &a[j]);
	}
}

int main() {
	int n;
	int a[100];
	scanf("%d", &n); //정렬할 숫자 개수
	input(a, n);
	selectionSort(a, n);
	output(a, n);
	return 0;
}