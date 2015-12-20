#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char* argv[]){
	
	truncate("truncatetest.txt",20);
	return 0;
}
