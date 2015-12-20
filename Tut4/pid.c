#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[]){

	printf("I am process %ld\n", (long)getpid());

	printf("My parent is %ld\n", (long)getppid());

	return 0;
}
