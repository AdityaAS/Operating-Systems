#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

/*
:::::::::::::::::::::::::::::::::::::::::::::::Readme FIRST:::::::::::::::::::::::::
1.Uncomment pipe on line 13, prog runs fine....
2.Uncomment pipe on line 16, prog doesnt halt....
*/

int main(){
	int pfd[2];
	int pid;
	char buf[30];
	//pipe(pfd); 	// if pipe is here, program runs fine....
	pid=fork();
	pipe(pfd);	// if pipe is here, read() in parent doesnt return
	//uncomment the above pipe and program will not terminate.....
	
	if (pid==0){
		printf(" Child pfd[1] = %d\t pfd[0] = %d",pfd[1],pfd[0]);
		printf("\n CHILD: writing to the pipe\n");
		write(pfd[1], "test", 5);
		//read(pfd[0], buf, 5);
		printf("\n CHILD: exiting \n");//,buf);
		exit(0); 
	}
		
	else{
		
		printf(" Parent pfd[1] = %d\t pfd[0] = %d",pfd[1],pfd[0]);
		wait(NULL); 
		printf("\n PARENT: reading from pipe\n");
		//write(pfd[1], "test", 5); // If this line is uncommented the program will run fine because the parent pipe will have data that can be read...
		printf("parent reading\n");
		int n;
		read(pfd[0], buf, 5);		//this read is not getting returned....
		printf("\n PARENT: read %s \n", buf);
		
	}
}
