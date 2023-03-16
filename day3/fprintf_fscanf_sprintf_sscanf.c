#include <stdio.h>
#include <string.h>

int main() {
	FILE *fp = fopen("s3.txt","w+");
	fprintf(fp,"%s %d %c\n","lrx",24,'M');
	fprintf(fp,"%s %d %c\n","lxb",26,'F');
	char name[10];
	memset(name,0,sizeof(name));
	int age = 0;
	char gender = 0;
	rewind(fp);
	while(EOF != fscanf(fp, "%s %d %c\n", name,&age,&gender)) {
		printf("%s %d %c\n",name,age,gender);
	}
	fclose(fp);
	char buff[100];
	sprintf(buff,"%s %d %c\n",name,age,gender);
	printf("%s",buff);
	char name2[10];
	memset(name2,0,sizeof(name2));
	int age2 = 0;
	char gender2 = 0;
	sscanf(buff,"%s %d %c\n",name2,&age2,&gender2);
	printf("%s %d %c\n",name2,age2,gender2);
}
