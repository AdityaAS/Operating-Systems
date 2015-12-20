#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <string.h>
#include <fcntl.h>
#define BUFFSIZE 8192

//////READ WRITE EXAMPLE

/*int main(int argc, char* argv[]){
	int n;
	char buf[BUFFSIZE];
	
	while((n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0){
		if(write(STDOUT_FILENO,buf,n) != n){
			printf("Write Error!!!\n");
		}
	}
	if(n < 0){
		printf("Read Error!!!\n");
	}
	return 0;
}
*/
////OPEN CLOSE READ WRITE, and while writing to file opened using code, 
////remember to set proper permissions/////////////////////
/*
int main(int argc, char* argv[]){
	int n;
	char buf[BUFFSIZE];
	int fdi, fdo;
	fdi = open("test.txt",O_RDONLY);
	
	if(fdi == -1){
		printf("Error opening source file\n");
	}
	
	fdo = open("out.txt",O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	
	if(fdo == -1){
		printf("Could not open target file\n");
	}
	
	while((n = read(fdi,buf,BUFFSIZE)) > 0){
		if(write(fdo,buf,n) != n)
			printf("Error while writing\n");
	}
	
	
	if(n == -1){
		printf("Error while reading\n");
	}
	else{
		printf("Reading finished\n");
	}
	close(fdi);close(fdo);
	
	return 0;
}
*/
///how to use lseek - printing a file in reverse!!!///////////
int main(int argc, char* argv[]){
	
	
	
	return 0;
}	
		
	
	
	
	
