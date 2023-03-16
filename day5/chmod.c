#include <sys/stat.h>
#include <stdio.h>

int main() {
	chmod("1.txt",0777);
	perror("chmod:");	
	struct stat  buff;
	stat("1.txt",&buff);
	printf("st_mode:%d",buff.st_mode);
}
