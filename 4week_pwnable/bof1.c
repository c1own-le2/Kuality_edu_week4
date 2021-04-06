#include <stdio.h>

void win(){
	system("/bin/sh");
}

int main(){
	char buf[8];

	gets(buf);
	printf("Again!");

	return 0;
}


