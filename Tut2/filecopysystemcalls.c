#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/uio.h>
#define BUF_SIZE 8192
int main(int argc, char* argv[]){
	int fdi,fdo;
	ssize_t reti, reto;
	char buffer[BUF_SIZE];
	fdi = open("conan	.txt",O_RDONLY);
	fdo = open("copy_of_file.txt",O_WRONLY | O_TRUNC | O_CREAT,0755);
	//open returns -1 if there is an error otherwise it will assign a non negative number to them...
	if(fdi == -1 || fdo == -1){
		printf("Error in opening one of the files\n");
		return -1;
	}
	// read function returns the number of bytes actually read by the read function......
	// if at any point, read returns a non positive value, it means that EOF has been reached......
	// the last parameter of the write system call is the number of bytes to be written, it should always be the number returned by the read system call.
	//write system call returns the actual number of bytes written onto the file, if reti and reto are not equal it means there is conflict in read/write.
	
	while((reti = read(fdi, buffer, BUF_SIZE)) > 0){
		reto = write(fdo, buffer, reti);
		if(reto != reti){
			printf("Error in writing input to output\n");
			return -1;
		}
	}
	close(fdi);close(fdo);
	printf("%d\n",EXIT_SUCCESS);
	return 0;
}
		
		
	
