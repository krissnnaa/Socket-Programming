#include<stdio.h>
#include<stdlib.h>

union{
short s_byte;
char c_byte[sizeof(short)];
}un;

void main(int argc, char **argv){

	//Assign two-byte value
	un.s_byte = 0x1122;

	if (sizeof(short) == 2) {

		if (un.c_byte[0] == 0x11 && un.c_byte[1] == 0x22){

			printf("Byte Order is Big-endian\n");

			}

		else if (un.c_byte[0] == 0x22 && un.c_byte[1] == 0x11){

			printf("Byte Order is Little-endian\n");
	
			}
		else{

		printf("Unknown Byte-Order\n");
	
		} 
	}

	else{

	printf("sizeof(short) = %ld\n", sizeof(short));
	
	}
exit(0);
}
