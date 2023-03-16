#include <stdio.h>
#include <string.h>

typedef struct {
	char name[20];
	int age;
}student;
int main() {
	FILE *fp = fopen("1.txt","r+");
	if (fp == NULL) {
		perror("fopen:");
		fclose(fp);
		return -1;
	}
	char buffer[10];
	
	fread(buffer,1,10,fp);
	printf("%s\n",buffer);
	fclose(fp);
	
	FILE *fp2 = fopen("2.txt","w+");
	if (fp2 == NULL) {
		perror("fopen:");
		fclose(fp2);
		return -1;
	}
	student stu[2];
	strcpy(stu[0].name,"lrx");
	stu[0].age = 10;
	strcpy(stu[1].name,"lxb");
	stu[1].age = 20;
	if(2 != fwrite(stu,sizeof(student),2,fp2)) {
		perror("fwrite:");
		fclose(fp2);
		return -1;
	}
	fclose(fp2);

	student stu2[3];
	FILE *fp3 = fopen("2.txt","r");
	if (fp3 == NULL) {
		perror("fopen:");
		fclose(fp3);
		return -1;
	}
	printf("fread:%ld\n",fread(stu2,sizeof(student),3,fp3));
	fclose(fp3);

	for(int i=0;i<2;++i) {
		printf("name:%s  age:%d  \n",stu2[i].name,stu2[i].age);
	}
	return 0;
}

