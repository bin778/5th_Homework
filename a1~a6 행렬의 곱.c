#include <stdio.h>
int main() {
	int a1[5][2] = { 1,1,1,1,1,1,1,1,1,1 };
	int a2[2][3] = { 1,1,1,1,1,1 };
	int a3[3][4] = { 1,1,1,1,1,1,1,1,1,1,1,1 };
	int a4[4][3] = { 1,1,1,1,1,1,1,1,1,1,1,1 };
	int a5[3][2] = { 1,1,1,1,1,1 };
	int a6[2][3] = { 1,1,1,1,1,1 };
	int result1[5][3] = { 0 };
	int result2[5][4] = { 0 };
	int result3[5][3] = { 0 };
	int result4[5][2] = { 0 };
	int result5[5][3] = { 0 };
	int i, j, k;

	printf("a1�� ���\n");
	for (i = 0; i<5; i++) {
		for (j = 0; j<2; j++) {
			printf("%3d", a1[i][j]);
		}
		printf("\n");
	}

	printf("\na2�� ���\n");
	for (i = 0; i<2; i++) {
		for (j = 0; j<3; j++) {
			printf("%3d", a1[i][j]);
		}
		printf("\n");
	}

	printf("\na3�� ���\n");
	for (i = 0; i<3; i++) {
		for (j = 0; j<4; j++) {
			printf("%3d", a1[i][j]);
		}
		printf("\n");
	}

	printf("\na4�� ���\n");
	for (i = 0; i<4; i++) {
		for (j = 0; j<3; j++) {
			printf("%3d", a1[i][j]);
		}
		printf("\n");
	}

	printf("\na5�� ���\n");
	for (i = 0; i<3; i++) {
		for (j = 0; j<2; j++) {
			printf("%3d", a1[i][j]);
		}
		printf("\n");
	}

	printf("\na6�� ���\n");
	for (i = 0; i<2; i++) {
		for (j = 0; j<3; j++) {
			printf("%3d", a1[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i<5; i++) {
		for (j = 0; j<3; j++) {
			for (k = 0; k<2; k++) {
				result1[i][j] += a1[i][k] * a2[k][j];
			}
		}
	}

	for (i = 0; i<5; i++) {
		for (j = 0; j<4; j++) {
			for (k = 0; k<3; k++) {
				result2[i][j] += result1[i][k] * a3[k][j];
			}
		}
	}

	for (i = 0; i<5; i++) {
		for (j = 0; j<3; j++) {
			for (k = 0; k<4; k++) {
				result3[i][j] += result2[i][k] * a4[k][j];
			}
		}
	}

	for (i = 0; i<5; i++) {
		for (j = 0; j<2; j++) {
			for (k = 0; k<3; k++) {
				result4[i][j] += result3[i][k] * a5[k][j];
			}
		}
	}

	for (i = 0; i<5; i++) {
		for (j = 0; j<3; j++) {
			for (k = 0; k<2; k++) {
				result5[i][j] += result4[i][k] * a6[k][j];
			}
		}
	}

	printf("\na1~a6������ ����� ��\n");
	for (i = 0; i<5; i++) {
		for (j = 0; j<3; j++) {
			printf("%5d", result5[i][j]);
		}
		printf("\n");
	}
	return 0;
}