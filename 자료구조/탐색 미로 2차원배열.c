#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int m[9][9] = { //maze
             {2,2,2,2,2,2,2,2,2},
             {2,0,0,0,0,0,0,0,2},
             {2,0,2,2,0,2,2,0,2},
             {2,0,2,0,0,2,0,0,2},
             {2,0,2,0,2,0,2,0,2},
             {2,0,0,0,0,0,2,0,2},
             {2,2,0,2,2,0,2,2,2},
             {2,0,0,0,0,0,0,0,2},
             {2,2,2,2,2,2,2,2,2} };
int Si, Sj, Ei, Ej; //Start 출발, End 도착 지점 표시
int success,top, Path_i[100], Path_j[100];
//S : Start, 출발점 E : End, 도착점, idx 경로 배열 인덱스
//Path_i, Path_j : 지나간 길을 저장함(i는 행, j는 열)
int visit(int, int);
int main() {
    top = 0; //stack의 top 변수를 0으로 초기화
    success = 0; //미로 탈출 여부
    printf("===미로 탈출 경로 찾기 게임===\n");
    Si = 1, Sj = 1; //출발점 m배열의 1행 1열 위치
    Ei = 7, Ej = 6; //도착점 m배열의 7행 7열 위치
    if (visit(Si, Sj) == 0)
        printf("미로의 출구를 찾을 수 없음\n");
    else
        printf("미로의 모든 경로를 찾았음\n");
    return 0;
}

int visit(int i, int j) {
    static int path = 1; //찾은 경로의 수 카운트
    m[i][j] = 1; //배열에 0이 있다면 아직 가지 않은 길이란 의미
    //지나간 길에는 1을 저장해 둔다.
}