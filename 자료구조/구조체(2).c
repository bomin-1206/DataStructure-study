#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct STU {
	char name[10];
	int age;
}stu;

int main() {
	stu* student;
	student = (stu*)malloc(sizeof(stu));//�����ϱ�
	strcpy(student->name, "KIM");
	student->age = 17; //(*student).age = 18;�� ����.
	free(student);
	return 0;
}