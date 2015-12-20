#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h>

int main(){
	int pfds[2];
	pipe(pfds);
	if (fork()==0){
		/* In the child close the writing end of the pipe,*/
		close(1);
		/* close normal stdout */
		dup(pfds[1]); /* make stdout same as pfds[1] */
		close(pfds[0]); /* we don't need this */
		execlp("ls", "-l", NULL);
	}
	else{
		/* In the parent close the reading end of the pipe. */
		close(0); /* close normal stdin */
		dup(pfds[0]); /* make stdin same as pfds[0] */
		close(pfds[1]); /* we don't need this */
		execlp("wc", "−l", NULL);
	}
	
}
