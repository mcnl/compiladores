#define PI 3.14
int a = 3;
float b = 0.3;
float square (float x) {
	return x * x;
}

int main () {
	a = 3;
	float c = a / b;
	c /= 3 * (2 - b) + 4;
	return 0;
}
