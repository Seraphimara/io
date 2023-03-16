#include<dirent.h>
#include <stdio.h>

int main() {
	DIR *dr = opendir("../../");
	if(NULL == dr) {
		perror("opendir:");
		return 0;
	}
	struct dirent *ds;
	while((ds=readdir(dr))!=NULL) {
		printf("%s\n",ds->d_name);
	}
	if(EOF == closedir(dr)) {
		perror("closedir:");
		return 0;
	}

}
