#include <stdio.h>

int main() {
	int i;
	int four_ints[4];
	char* four_c;

	for(i = 0; i < 4; i++)
        four_ints[i] = 2;

	// printf("%x\n", four_ints[0]);
	
    four_c = (char*)four_ints;

	for(i = 0; i < 4; i++){
        four_c[i] = 'A' + i; // ASCII value of 'A' is 65 or 0x41 in Hex.
	}
    // Add your code for the exercises here:
	// printf("%x\n", four_ints[0]); // number 3
	// printf("%x\n", four_c[0]); //part c
	// printf("%x\n", four_c[1]); //part c
	// printf("%x\n", four_c[2]); //part c
	// printf("%x\n", four_c[3]); //part c
	// printf("%x\n", four_ints[1]);

	for(i =0; i < 4; i++){
		printf("%p\n", (void*)&four_ints[i]);
	}
	printf("\n");

	for(i =0; i < 4; i++){
		printf("%p\n", (void*)&four_c[i]);
	}
	printf("\n");

		for(i =0; i < 4; i++){
		printf("%x\n", four_c[i]);
	}

	
	return 0;
}