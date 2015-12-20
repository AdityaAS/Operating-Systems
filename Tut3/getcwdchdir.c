#include <sys/types.h>
#include <sys/uio.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	
	char* buf;
	long max;
	max = pathconf("/",_PC_PATH_MAX);
	buf = (char*)malloc(max+10);
	getcwd (buf, max+10);
	printf("%s\n",buf);
	free(buf);
	
	int fdo1 = open("test.txt",O_RDWR | O_CREAT | O_TRUNC,S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH);
	
	write(fdo1,"Hello",strlen("Hello"));
	
	close(fdo1);
	
	chdir("test");
	
	fdo1 = open("test.txt",O_RDWR | O_CREAT | O_TRUNC,S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH);
	
	write(fdo1,"World",strlen("Hello"));
	
	close(fdo1);
	
	return 0;
}
	
