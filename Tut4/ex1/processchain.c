#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <dirent.h>
#include <string.h>


int main(){
	pid_t childpid = 0;
	int i,n;
	
	for(i=1;i<=10;i++){
		childpid = fork();
		wait();
		if(childpid == -1)
			break;
			
	}
		
	
	fprintf(stderr, "i: %d process %ld parent %ld child %ld\n",i,(long)getpid(),(long)getppid(),(long)childpid);
	
	return 0;
}
	
