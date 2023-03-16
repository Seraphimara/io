#include <stdio.h>

int main(int argc,char *argv[]) {
	FILE *fp = fopen("1.txt","w+");
	if(fp == NULL) {
		perror("fopen:");	
		return 0;
	}
	fputc('l',fp);
	fputc('r',fp);
	fputc('x',fp);
	fclose(fp);
	fp = fopen("1.txt","r");
	printf("%c\n",fgetc(fp));
	printf("%c\n",fgetc(fp));
	fclose(fp);
	fp=NULL;
	return 0;
}
