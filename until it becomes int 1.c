#include <stdio.h>

int main(void) {

	int n, k,cnt=0;

	scanf("%d %d", &n, &k);

	while(1) {

		if (n == 1) { break; }

		if (n % k == 0) {
			n = n / k;
			cnt += 1;
			if (n == 1) {
				break;
			}
		}

		else {
			n -= 1;
			cnt += 1;
		}


	}

	printf("%d", cnt);


	return 0;
}
