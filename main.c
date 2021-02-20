#include <function.h>
#include <stdio.h>
int main(int argc, char **argv) {
	int a = 4;
	int b = 6;
	int c = function(a, b);
	for (size_t i = 0; i < c; i++) {
		printf("Hello, world!!!\n");
	}
}