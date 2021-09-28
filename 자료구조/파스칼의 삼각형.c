#include<stdio.h>
#define N 10
long combi(int, int); //수학에서 조합(combination)
//수학 확률과 통계 단원 순열(permutation)과 조합(combination)
//순열 : 순서를 생각한다.
//조합 : 순서를 생각하지 않는다.
int main() {
	int n, r, t;//nPr 순열 공식, nCr 조합 공식
	for (n = 0; n <= N; n++) { //몇줄 할것인지
		for (t = 0; t < (N - n) * 3; t++) //앞에 공백을 얼마만큼 할것이다.
			printf(" ");
		for (r = 0; r <= n; r++) //숫자 찍기
			printf("%3d   ", combi(n, r)); //combi(n,r)을 찍는다.
		printf("\n");
	}
	return 0;
}
long combi(int n, int r) {
	int i;
	long c = 1;
	for (i = 1; i <= r; i++)
		c = c * (n - i + 1) / i; //수학공식...(?)
	return c;
}