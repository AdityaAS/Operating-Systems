#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>

int main(int argc, char* argv[]){
	//int fdi;
	//fdi = open("conan.txt",O_RDONLY);
	char buffer[8192];
	int r;
	
	while((r = read(STDIN_FILENO,buffer,8192)) > 0){
		write(STDOUT_FILENO, buffer, r);
	}
	
	return 0;
}	
 	
