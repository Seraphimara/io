#include <stdio.h>
#include <unistd.h>
#include <string.h>


int main() {
	FILE *fp = fopen("3.txt","w+");
	fputs("hello world\nlrx\nlxb",fp);
	fflush(fp);
	printf("now:%ld\n",ftell(fp));

	char buffer[100];
	printf("%ld %ld %ld\n",SEEK_SET,SEEK_CUR,SEEK_END);
	
	memset(buffer,0,sizeof(buffer));
	fseek(fp,-3,SEEK_END);
	printf("now:%ld\n",ftell(fp));
	fgets(buffer,4,fp);
	puts(buffer);	

	memset(buffer,0,sizeof(buffer));
	fseek(fp,3,SEEK_SET);
	printf("now:%ld\n",ftell(fp));
	fgets(buffer,4,fp);
	puts(buffer);	

	memset(buffer,0,sizeof(buffer));
	rewind(fp);
	printf("now:%ld\n",ftell(fp));
	fread(buffer,1,100,fp);
	int i=0;
	while(buffer[i] != '\0')
		putchar(buffer[i++]);
	puts("");
		
	fseek(fp,0,SEEK_END);
	printf("now:%ld\n",ftell(fp));
	fclose(fp);	

}


