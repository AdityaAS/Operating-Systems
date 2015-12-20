#include <stdio.h>
#include <unistd.h>

int main(){
	int i, n;

	pid_t childpid = 0;
	
	for(i=0;i<10;i++){
		pid_t cpid = fork();
		if(childpid == cpid){
			fprintf(stdout,"if %d\n", childpid);
			continue;
		}
		else{
			fprintf(stdout,"else %d\n", childpid);
			break;
		}
	}
	
	fprintf(stdout,"i : %d, process id %ld, parent id %ld\n",i,(long)getpid(),(long)getppid());
	
	return 0;
}
