#include<stdio.h>

 struct stu {
	//�̸�, ����, ��������
	char name[10];
	int age;
	int score;
};

typedef struct stu student;

int main() {
	student s13 = { "kim",17,90 };
	student s12 = { "park",17,95 };
	//����ü ���� �ʱ�ȭ
	//����ü�� ����ϴ� printf()�� ��������.
	printf("�̸� : %s\n",s13.name );
	printf("���� : %d\n",s13.age );
	printf("���� : %d\n",s13.score );
	return 0;
}