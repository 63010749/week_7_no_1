#include<stdio.h>

void line(int num) {
	for (int u = 1; u <= (2 * num) - 1; u++) {
		if (u < num + 1) {
			printf("  ");
		}
		if (u == num + 1) {
			printf("* ");
		}
	}
}

int main() {
	int num;
	scanf("%d", &num);
	int num1 = num;
	int num2 = 2;
	int num3 = num;
	line(num);
	printf("\n");
	for (int i = 1; i <= (2 * num) - 1; i++) {
		if (i < num) {
			int p;
			for (int q = 1; q <= 3; q++) {
				if (q == 1) {
					for (p = num3 - 1; p >= 1; p--) {
						printf("  ");
					}
				}
				if (q == 2) {
					for (p = 1 + (2 * (num2 - 2)); p >= -1; p--) {
						printf("* ");
					}
					num2++;
				}
				if (q == 3) {
					for (p = num3 - 1; p >= 1; p--) {
						printf("  ");
					}
				}
			}
			printf("\n");
			num3--;

		}

		if (i > num + 1) {
			for (int j = 1; j <= 3; j++) {
				if (j == 1) {
					for (int n = 1; n <= i - num; n++) {
						printf("  ");
					}
				}

				if (j == 2) {
					for (int n = (2 * (num1 - 2)) - 1; n >= -1; n--) {
						printf("* ");
					}
				}
				if (j == 3) {
					for (int n = 1; n <= i - num; n++) {
						printf("  ");
					}
				}
			}
			printf("\n");
			num1--;
		}
	}
	line(num);
	return 0;
}