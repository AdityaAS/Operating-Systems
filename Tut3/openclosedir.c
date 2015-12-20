#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <dirent.h>

int main(int argc, char* argv[]){
	
	DIR* dir1 = opendir(".");
	struct dirent* dirr;
	
	while((dirr = readdir(dir1)) != NULL){
		printf("%d file is %s\n",(int)dirr->d_ino,dirr->d_name);
	}
	
	closedir(dir1);
	return 0;
}
