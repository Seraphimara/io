#include <stdio.h>

int main() {
	FILE *fp = fopen("1.txt","a+");
	if(fp == NULL) {
		perror("fopen:");
		return -1;
	}
	char a[10];
	fgets(a,4,fp);
	printf("%d\n",'\n');
	for(int i=0;i<10;i++) {
		printf("%d  ",a[i]);
	}
	fputs("hello world",fp);
	fclose(fp);
	return 0;
}
