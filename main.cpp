#include "sdt.h"
#include <cmath>
#include <iostream>
#include <locale>
using namespace std;
// Программа учебная
int main() {
	int a;
	int b;

	printf("Vvedite 2 chisla \n");

	cin >> a;
	cin >> b;
	
	printf("%u \n", a + b);
	printf("%u \n", a - b);
	printf("%u \n", a * b);
	printf("%u \n", a / b);
	return 0;
}