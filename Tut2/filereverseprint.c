#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<sys/stat.h>
#include<unistd.h>

int main(int argc, char* argv[]){
	int fdi, fdo, n;
	char buf;
	int i;
	//printf("RO %d WO %d CREAT %d TRUNC %d\n", O_RDONLY, O_WRONLY, O_CREAT , O_TRUNC);
	/*
	fdi = open("conan.txt",O_RDONLY);
	fdo = open("file_reverse.txt", O_WRONLY | O_CREAT | O_TRUNC);
	printf("RO %d WO %d CREAT %d TRUNC %d\n", O_RDONLY, O_WRONLY, O_CREAT , O_TRUNC);
	if(fdi == -1){
		printf("Error in Opening input file\n");
		return -1;
	}
	if(fdo == -1){
		printf("Error in Opening Output file\n");
		return -1;
	}
	int filesize = lseek(fdi, 0 , SEEK_END);
	if(filesize == -1){
		printf("Error Seeking\n");
	}
	for(i=filesize-1;i>0;i--){
	*/
	return 0;
	
}
			
