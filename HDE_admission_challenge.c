#include <stdio.h>
#include <stdlib.h>

int k = 0, l = 0;
int X[100]; // 0 < X <= 100
int Y[100][100]; // -100 <= Yn <= 100
int answer = 0;
void input_Y(int num){
	if(num == 0)
		return;
	scanf("%d", &Y[k][l]);
	if(Y[k][l] > 0)
		answer += Y[k][l]*Y[k][l];
	l++;
	num--;
	input_Y(num);
	return;
}

void input_X(int N){
	if(N == 0)
		return;
	l = 0;
	scanf("%d", &X[k]);
	answer = 0;
	input_Y(X[k]);
	printf("%d\n", answer);
	k++;
	N--;
	input_X(N);
	return;
}

int main(void){
	int N; //  1 <= N <= 100
	int i, j;
	scanf("%d", &N);
	input_X(N);
	return 0;
}