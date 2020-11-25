#include <stdio.h>
int main() {
	// 杨辉三角
	// 定义 10 * 10 二维数组
	int a[10][10];
	// 每一行
	for (int i = 0; i < 10; i++) {
		// i + 1 代表了这行的数字个数
		// 开头和结尾都是 0
		a[i][0] = 1;
		a[i][i] = 1;
		// 从第三行开始，除了开始和结尾，其他的数等于上面两数的和
		if (i >= 2) {
			for (int j = 1; j < i; j++) {
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			}
		}
	}
	// 打印输出
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < i + 1; j++) {
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}