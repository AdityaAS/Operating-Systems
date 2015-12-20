#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>


int main(int argc, char* argv[]){
	int rem = rmdir("test");
	if(rem == -1){
		printf("Error!!, Could not remove directory!!\n");
		return -1;
	}
	
	return 0;
}
