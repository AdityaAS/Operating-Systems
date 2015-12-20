#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#define BUFFSIZE 8192

int main(){
	
	int n;
	char buf[BUFFSIZE];
	while((n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0){
		if(n != write(STDOUT_FILENO, buf, n)){
			printf("error while writing\n");
		}
	}
	if(n < 0){
		printf("read error!!\n");
	}
	return 0;
}
			
