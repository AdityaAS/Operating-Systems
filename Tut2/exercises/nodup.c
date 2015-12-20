#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#define BUFFSIZE 8192

int main(int argc, char* argv[]){
	int fd1, fd2, fd3, fd0;
	char buf[BUFFSIZE];
	fd1 = open("input.txt", O_RDONLY);
	fd2 = open("dupout.txt", O_WRONLY);
	
	fd3 = dup2(fd2,STDIN_FILENO);
	
	int n;
	while((n = read(fd1, buf, BUFFSIZE)) > 0){
		int out = write(STDIN_FILENO, buf, n);
		if(out != n){
			printf("write error!\n");
		}
	}
	close(fd3);
	close(fd2);
	close(fd1);
	return 0;
}
	
	
