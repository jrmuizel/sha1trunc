#include <string.h>
#include <stdio.h>
#include "eng.h"
int main() {
	char *d = "abc";
	/*"abc"
  A9993E36 4706816A BA3E2571 7850C26C 9CD0D89D
"abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopq"
  84983E44 1C3BD26E BAAE4AA1 F95129E5 E54670F1
A million repetitions of "a"
  34AA973C D4C4DAA4 F61EEB2B DBAD2731 6534016F
**/
	int r = sum(d, strlen(d));
	if (r != 0xa9993e36) {
		printf("bad sum: %x\n", r);
	} else {
		printf("%x\n", r);
	}
	return 0;
}
