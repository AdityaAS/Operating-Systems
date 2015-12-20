#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/uio.h>
int main(){
	int idx;
	for(idx=0;idx<sys_nerr;idx++){
		printf("Error #%3d: %s\n",idx,strerror(idx));
	}
	return 0;
}
