#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	int j = 4;
	for(int i=0; i<1025; ++i)
		printf("%d",j);
	//printf("hello world");
	
	while(1)
		sleep(1);
	return 0;
}
