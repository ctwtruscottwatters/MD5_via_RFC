#include <stdio.h>
#include <time.h>
#include <string.h>
#include "global.h"
#include "md5.h"
#include "md5c.c"

static void MD5String(char * string);

int main(int argc, char * argv[]) {
	printf("CHARLES T.W. TRUSCOTT WATTERS, MD5 via RFC");
	if(argc < 1) {
		printf("usage: md5.exe string\n");

	}
	printf("\n");
	MD5String(argv[1]);
	
}

static void MD5String(char * string) {
	MD5_CTX context;
	unsigned char digest[16];
	unsigned int len = strlen(string);

	MD5Init(&context);
	MD5Update(&context, string, len);
	MD5Final(digest, &context);
	printf("\"%s\"", string);
	printf("Thanks!\n");
}