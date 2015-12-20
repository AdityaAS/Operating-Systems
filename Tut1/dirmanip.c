#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	if(argc < 2){
		printf("Use as ./exec pathname\n");
		exit(1);
	}
	if(chdir(argv[1]) != 0){
		printf("Error in chdir\n");
		exit(1);
	}
	return 0;
}

