#include <signal.h>
#include <stdio.h>


int main(){
	printf("Starting the application\n");
	
	alarm(2);
	while(1){}
	printf("Alarm goes off, wait for it\n");
	
	return 0;
}

