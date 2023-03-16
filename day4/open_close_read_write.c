#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main() {
	int fd;
	fd = open("1.txt",O_RDWR |O_CREAT | O_TRUNC, 00666);
	if(fd < 0) {
		perror("open:");
		return 0;
	}
	char b[10]={0};
	char c[10]="???";
	char a[20]="hello world lrx lxb";
	printf("%x %x\n",&(a[0]),&(b[9]));
	write(fd,a,strlen(a));
	lseek(fd,0,SEEK_SET);
	printf("%ld\n",read(fd,b,sizeof(b)));
	printf("%s",b);



	
}
