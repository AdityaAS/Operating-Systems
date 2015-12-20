#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
extern char** environ;
/*
int main(void) {
	pid_t childpid;
	pid_t mypid;

	mypid = getpid();

	childpid = fork();

	if(-1 == childpid){
		perror("Failed to fork");
		return 1;	
	}

	if(0 == childpid)
	printf("I am child %ld, ID = %ld\n",(long)getpid(),(long)mypid);

	else
	printf("I am parent %ld, ID = %ld\n",(long)getpid(),(long)mypid);
	int i;
	printf("Environment Listing of this program\n");
	for(i=0;environ[i]!=NULL;i++){
		printf("%s\n",environ[i]);
	}
	
	return 0;

}
*/

int main(){
	//char* s = (char*)malloc(sizeof(char)*200);
	//s = getenv("LOGNAME");
	//if(s==NULL)
		//printf("Variable Not Found\n");
	//else
		printf("Value is %s \n", getenv("LOGNAME"));
	return 0;
}
