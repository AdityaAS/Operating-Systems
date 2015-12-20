#include <stdio.h>






int main(){
	int pfd[2];
	char buf[30];
	
	if(pipe(pfd) == -1){
		perror("\n Error in pipe creation \n");
		return 1;
	}
	int pid;
	int nread;
	if(	(pid = fork()) < 0){perror("Fork Failed\n");return 2;}
		
	if(pid == 0){ //Child process
		printf("Executing Child Process\n");
		close(pfd[1]);
		//Child reads what parent writes..........
		while((nread = read(pfd[0], buf, 11))== 0);		
		printf("child Reads %s \n", buf);
		close(pfd[0]); //close childs reading fd.....
	}
	else{
		sleep(2);
		printf("Executing Parent Process\n");
		close(pfd[0]);
		
		//parent writes into the pipe.............
		write(pfd[1], "HelloWorld", 11);
		close(pfd[1]);
	}
	
	
	
	return 0;
}
	
