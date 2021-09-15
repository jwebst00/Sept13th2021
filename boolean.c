#include <stdio.h>

int main(int argc, char*argv[]) {
	unsigned char codes = 0b01001101;
	unsigned char mask = 0x40;
	
	unsigned status1 = codes & mask;

	printf("0x%x\n", status1);	
	if(status1 > 0) {
		printf("Both Flags Set\n");
	}

	unsigned status2 = codes | mask;
	printf("0x%x\n", status2);



	return 0;
}
