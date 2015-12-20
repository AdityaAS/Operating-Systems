#include<sys/wait.h>
#include<stdio.h>

int main(void){
	pid_t childpid;
	childpid = wait(NULL);
	
	if(childpid != -1)
		printf("Waited for child with pid %ld\n", (long)childpid);
	else
		printf("No child to wait for");
	
	return 0;
}
