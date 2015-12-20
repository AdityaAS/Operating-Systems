#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(void){
	long max;
	char *buf;max= pathconf("/",_PC_PATH_MAX);

	buf=(char*)malloc(max);
	getcwd(buf,max);

	printf("%s\n",buf);
	return 0;
}
