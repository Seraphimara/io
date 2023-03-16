#include <stdio.h>
#include <errno.h>
#include <string.h>


int main(int argc,char *argv[]) {
	FILE *fp;
	fp = fopen("1.txt","r");
	if(NULL == fp) {
		//printf("open file failed\n");
		perror("fopen:");
		printf("%s\n",strerror(errno));
	}else {
		//printf("open file success\n");
		int ret = fclose(fp);
		if(ret == EOF) {
			perror("fclose:");
			printf("%s\n",strerror(errno));
		}else {
			printf("close file success\n");
		}
	}
}
