#include <stdio.h>
#include <unistd.h>
//bad code has been corrected
int main() {
	pid_t childpid;
	pid_t mypid;
	
	childpid = fork();
	mypid = getpid();
	if(-1 == childpid){
		perror("Failed to fork");
		return 1;
	}
	
	if(0 == childpid){
		mypid = getpid();
		printf("I am child %ld, ID = %ld\n",(long)getpid(),(long)mypid);
	}
	else{
		
		printf("I am parent %ld, ID = %ld\n",(long)getpid(),(long)mypid);
	}
	return 0;
}
