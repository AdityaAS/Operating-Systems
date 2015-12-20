#include <stdio.h>
#include <unistd.h>
int main(void) {
	pid_t childpid;

	childpid = fork();
	if(-1 == childpid){
		perror("Failed to fork");
		return 1;
	}

	if(0 == childpid)
		printf("I am child %ld\n", (long)getpid());
	else
		printf("I am parent %ld\n", (long)getpid());

	return 0;
}
