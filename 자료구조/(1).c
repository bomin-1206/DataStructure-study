#include<stdio.h>
int main() {
	char str[] = "Hello"; //char str[6]="Hello(\0)"�� ����. / �迭�� �̸��� �ּ�;
	//�迭�� ũ�Ⱑ 6�� ������ �ڿ� ������ ������ \0�� �����ִ�.
	char* p;
	p = str; //p = &str[0];�� ����.
	while (*p)
		putchar(*p++); //���� ��� �� �ּ� ����
	return 0;
}