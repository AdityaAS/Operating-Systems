#define MAX_COUNT 20
#include <stdio.h>
#include <sys/types.h>

void ChildProcess(){ 
	int i;

	for (i = 1; i <= MAX_COUNT; i++)
		printf("\tThis line is from child, value = %d\n", i);

	printf(" * Child process is done *\n");
}

void ParentProcess(){ 
	int i;

	for (i = 1; i <= MAX_COUNT; i++)
		printf("This line is from parent, value = %d\n", i);

	printf("*** Parent is done ***\n");
}

int main(){
	pid_t pid;
	pid = fork();
	if(pid == 0)
		ChildProcess();
	else
		ParentProcess();
}


