#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	int x;
	x = 0;
	fork();
	./a.out//x=1;
	printf("I am process %ld & my x is %d\n",(long)getpid(),x);
	return 0;
}
