#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int row, col;
	scanf("%d %d", &row, &col);
	int** m = malloc(sizeof(int*) * row);

	for (int i = 0; i < row; i++) {
		m[i] = malloc(sizeof(int) * col);
	}


	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf("%d", &m[i][j]);



		}
	}
	int* smallest_num;
	smallest_num = (int *)malloc(sizeof(int) * row);

	for (int i = 0; i < row; i++) {
		int smallest = m[i][0];
		for (int j = 0; j < col; j++) {
			if (m[i][j] < smallest) {
				smallest = m[i][j];
			}
		}
		smallest_num[i] = smallest;
	}

	

	/*
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d", m[i][j]);



		}
	}
	*/

	int ans = smallest_num[0];
	for (int i = 0; i < row; i++) {
		if (ans < smallest_num[i]) {
			ans = smallest_num[i];
		}
	}

	printf("%d", ans);


	for (int i = 0; i < row; i++) {
		free(m[i]);
	}

	free(m);




	return 0;
}
