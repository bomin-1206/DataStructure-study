#include<stdio.h>
int main() {
	char str[] = "Hello"; //char str[6]="Hello(\0)"과 같다. / 배열의 이름은 주소;
	//배열의 크기가 6인 이유는 뒤에 보이지 않지만 \0이 숨어있다.
	char* p;
	p = str; //p = &str[0];과 같다.
	while (*p)
		putchar(*p++); //문자 출력 후 주소 증가
	return 0;
}