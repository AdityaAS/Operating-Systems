#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char* argv){
	int fdi, fdo;
	fdo = open("lseekconan.txt",O_RDWR | O_CREAT | O_TRUNC,S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH);
	fdi = open("input.txt",O_RDONLY);
	char buffer[8192];
	lseek(fdi,200,SEEK_SET);
	int r;
	while((r = read(fdi,buffer,8192)) > 0){
		write(fdo,buffer,r);
		//(STDOUT_FILENO,buffer,r);
	}
	return 0;
}
	
