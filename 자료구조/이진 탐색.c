//1000���� �����Ϳ��� ������ 10�� ���� ������ ã�ų�
//���ٰ� return ���ټ� �ִ�.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//�̺� Ž��, ���� Ž�� : *����*�� �迭�� ������ ã��

int arr[100] = { 5, 7, 33, 66, 67, 88, 99, 120, 134, 156, 201 };
int n, k; //k�� ���� ã�� ����
int count = 0;

/*����*/
int binarysearch(int s, int e) { //start end
	while (s <= e) {
		count++;
		int m = (s + e) / 2; //m�� middle
		if (arr[m] == k)
			return m; //ã�� �迭�� �ε���(��ġ)
		if (arr[m] > k)
			e = m - 1;
		else
			s = m + 1;
	}
	return -1; //�ᱹ ���ڸ� ��ã��
}
/*����*/

int main() {
	printf("ã�� ���� �Է� : ");
	scanf("%d", &k); //k=66;
	printf("%d��°���� �߰�\n", binarysearch(0, 10));
	return 0;
}

//****����****
//�� �� ���� ã�Ҵ��� count������
//����ϵ��� �ڵ带 ���� �Ǵ� �߰��Ͻÿ�.
//��) 12������ ã�ҽ��ϴ�.
//��) 25������ ��ã�ҽ��ϴ�.