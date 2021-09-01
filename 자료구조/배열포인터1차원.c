#include<stdio.h>
int main() {
	int* p;   //1차원 포인터
	//p는 어떤 변수의 주소를 저장하는 변수
	int(*ptr)[5]; //배열 포인터
	int arr[5]; //1차원 배열
	p = arr;
	ptr = &arr;
	printf("p=%p, ptr=%p\n", p, ptr);
	p++;
	ptr++;
	printf("p=%p, ptr=%p\n", p, ptr);
	return 0;
}