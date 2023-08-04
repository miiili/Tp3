#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
	int i;
	float x, y;
	
	for (i = 0; i < 50; i++) {
		x = (4 * PI / 50) * i;
		y = sinf(x) + 0.7f * cosf(2 * x) + 0.5f * sinf(3 * x);
		printf("x = %.2f, y = %.4f\n", x, y);
	}
	
	return 0;
}

