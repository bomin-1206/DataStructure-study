//1000개의 데이터에서 무조건 10번 만에 데이터 찾거나
//없다고 return 해줄수 있다.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//이분 탐색, 이진 탐색 : *정렬*된 배열속 데이터 찾기

int arr[100] = { 5, 7, 33, 66, 67, 88, 99, 120, 134, 156, 201 };
int n, k; //k는 내가 찾을 숫자
int count = 0;

/*시험*/
int binarysearch(int s, int e) { //start end
	while (s <= e) {
		count++;
		int m = (s + e) / 2; //m은 middle
		if (arr[m] == k)
			return m; //찾은 배열의 인덱스(위치)
		if (arr[m] > k)
			e = m - 1;
		else
			s = m + 1;
	}
	return -1; //결국 숫자를 못찾음
}
/*시험*/

int main() {
	printf("찾을 숫자 입력 : ");
	scanf("%d", &k); //k=66;
	printf("%d번째에서 발견\n", binarysearch(0, 10));
	return 0;
}

//****과제****
//몇 번 만에 찾았는지 count변수로
//출력하도록 코드를 수정 또는 추가하시오.
//예) 12번만에 찾았습니다.
//예) 25번만에 못찾았습니다.