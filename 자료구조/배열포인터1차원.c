#include<stdio.h>
int main() {
	int* p;   //1���� ������
	//p�� � ������ �ּҸ� �����ϴ� ����
	int(*ptr)[5]; //�迭 ������
	int arr[5]; //1���� �迭
	p = arr;
	ptr = &arr;
	printf("p=%p, ptr=%p\n", p, ptr);
	p++;
	ptr++;
	printf("p=%p, ptr=%p\n", p, ptr);
	return 0;
}