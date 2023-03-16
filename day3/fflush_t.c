#include <stdio.h>
#include <unistd.h>

int main() {
	/*
	printf("abce");
	fflush(stdout);
	*/
	FILE *fp = fopen("fflush.txt","w");
	if(NULL == fp) {
		perror("fopen:");
		return -1;
	}
	fputs("hello",fp);
	fflush(fp);		
	while(1) {
		sleep(1);
	}
}
