#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int n, m, k;
	int sum = 0;
	int cnt = 0;
	scanf("%d %d %d", &n, &m, &k);
	
	int * array = (int *)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}

	int large = array[0];
	int large_2 = array[0];

	for (int i = 0; i < n; i++) {
		if (array[i] > large) {
			large = array[i];
		}
	}

	for (int i = 0; i < n; i++) {
		if (array[i] < large && large_2 < array[i]) {
			large_2 = array[i];
		}
	}
	/*
	for (int i = 0; i < n; i++) {
		printf("%d\n", array[i]);
	}

	//printf("%d", large);
	//printf("%d", large_2);
	*/
	while (1) {

		for (int i = 0; i < k; i++) {
			if (m == cnt) {
				break;
			}
			sum += large;
			cnt += 1;
		}
		if (m == cnt) {
			break;
		}

		sum += large_2;
		cnt += 1;
	}


	printf("%d", sum);
	free(array);
	return 0;
}
