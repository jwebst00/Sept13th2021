#include <stdio.h>

int main(int argc, char*argv[]) {
	unsigned char value1 = 0x80;
	unsigned char value2 = 0x20;
	
	unsigned char result = value1 + value2;
	
	printf("[%x]value1: %d 0x%x\n", &value1, value1, value1);	
	printf("[%x]value2: %d 0x%x\n", &value2, value2, value2);
	printf("[%x]result: %d 0x%x\n", &result, result, result);
	
	return 0;
}
