#include <sys/types.h>
#include <sys/uio.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
//custom example to show the working of dup system call
#include <string.h>
int main(int argc, char* argv[]){
	int fdi = open("dupinput.txt",O_WRONLY);
	int fdidup = dup(fdi);
	char buffer[8192];
	write(fdi,"YOLOLOLO",strlen("YOLOLOLO"));
	write(fdidup,"COPY",strlen("COPY"));
	
	return 0;
}

