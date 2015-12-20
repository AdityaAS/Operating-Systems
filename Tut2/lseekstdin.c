#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char* argv[]){
	if(lseek(STDIN_FILENO, 0 , SEEK_CUR) == -1){
		printf("Cannot Seek STDIN\n");
	}
	else{
		printf("Can Seek STDIN\n");
	}
	return 0;
}
