#include<stdio.h>
//'Donald L. Shell'�̶�� ����� ������ �������,
//���������� ������ �˰����̴�.
void shellSort(int arr[], int n) {//n : 11
	int i, j, tmp, gap;
	for (gap = n / 2; gap > 0; gap /= 2) { //gap=gap/2
		//if (!(gap % 2)) gap++; //¦���� Ȧ����
		for (i = gap; i < n; i++) {//�������� ����
			tmp = arr[i];
			for (j = i; j >= gap && arr[j - gap] > tmp; j -= gap)
				arr[j] = arr[j - gap];
			arr[j] = tmp;
		}
	}
}
//���� gap�� 5�� ��(ù��° �����) �迭�� ���ڵ��� �̵���Ȳ�� �����ÿ�.


int main() {// 10�� �����͸� �� �����ϴ� ���� ���غ���.
	int arr[] = { 11,9,15,12,3,6,5,8,11,2,7 };// �� 11��, 10��
	int n = sizeof(arr) / sizeof(int);//11
	printf("%d�� ������ ����\n", n);
	shellSort(arr, n);
	for (int i = 0; i < n; i++)
		printf("%4d", arr[i]);
	printf("\n");
	return 0;
}