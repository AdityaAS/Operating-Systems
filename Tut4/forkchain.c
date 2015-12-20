#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[]){
	pid_t childpid = 0;
	int i=1,n;
	
	n = 10;
	//create process chain of length 10 processes....
	for(i=1;i<n;i++){
		if(childpid = fork())
		 	break;
		fprintf(stderr,"i: %d process ID: %ld parent ID: %ld child ID: %ld\n",i,(long)getpid(),(long)getppid(),(long)childpid);
	
	}
	return 0;
}
