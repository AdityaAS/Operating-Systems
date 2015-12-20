#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>

// to be executed as ./a.out source dest

int main(int argc, char* argv[]){
	int fdi, fdo;
	char buf;
	
	if(argc != 3){
		printf("Execute like this \" ./a.out source dest\"\n");
		return -1;
	}
	
	fdi = open(argv[1],O_RDONLY);
	fdo = open(argv[2],O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IXUSR);
	
	if(fdi < 0 || fdo < 0){
		printf("Error in opening one of the files\n");
		return -1;
	}
	
	printf("Writing in reverse begins\n");
	
	//if(lseek(fdi,0,SEEK_END) == -1)printf("Error in seeking\n");
	
	int filesize = lseek(fdi,(off_t)0, SEEK_END);
	
	if(filesize == -1){printf("Error in seeking\n");return -1;}
	
	int n;
	int i;
	for(i=filesize - 1; i >= 0; i--){
	
		lseek(fdi,(off_t)i,SEEK_SET);
		if((n = read(fdi,&buf,1)) > 0){
		
			int w = write(fdo,&buf,n);
			
			if(w != n)printf("write error\n");
		}		
	}
	
	printf("Done\n");
	close(fdi);
	close(fdo);
	return 0;
}
	
	
	
