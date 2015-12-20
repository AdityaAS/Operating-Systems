#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#define BUFFSIZE 8192

int main(){
	int fdi,fdo;
	char buf[BUFFSIZE];
	fdi = open("input.txt",O_RDONLY);	
	fdo = open("lseekout.txt",O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR|S_IWUSR|S_IXUSR|S_IRGRP|S_IXGRP|S_IROTH|S_IXOTH);
	
	lseek(fdi, 100, SEEK_SET);
	//lseek(fdo, 20, SEEK_SET);
	
	int n;
	
	while((n = read(fdi,buf,BUFFSIZE)) > 0){
		int out = write(fdo,buf,n);
		if(n != out){
			printf("Write error!\n");
		}
	}
	
	close(fdi);
	close(fdo);
	return 0;
	
}
