#include <stdio.h>

int main(int argc, char*argv[]) {
	char value1 = 0x60;
	char value2 = 0x10;
	
	char result = value1 + value2;
	
	printf("[%x]value1: %d %x, \n", &value1, value1, value1);	
	printf("[%x]value2: %d %x, \n", &value2, value2, value2);
	printf("[%x]result: %d %x, \n", &result, result, result);
	
	return 0;
}
