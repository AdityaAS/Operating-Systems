#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <unistd.h>

//#define BUF_SIZE 32
// ./exec inputfile outputfile
int main(int argc, char* argv[]){
	//printf("%d\n",BUFSIZ);
	int input_fd, output_fd;	//File descriptors
	ssize_t ret_in, ret_out;	//Number of bytes returned by read() and write()
	char buffer[BUFSIZ]; 		//buffer array --- ""BUFSIZ"" is a macro in syscalls.h, it is an appropriate value of buffer for the local system
	if(argc != 3){
		printf("Usage ./executable source_file dest_file\n");
		return 1; //What does return 1 mean???????????
	}
	
	//Create input file descriptor
	input_fd = open(argv[1], O_RDONLY);  //O_RDONLY - read only mode
	output_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644); //O_WRONLY | O_CREAT -- If file is not present create a new one and set it to WRONLY mode
	
	if (input_fd == -1) {
    	perror ("open");
    	return 2; //What does return 2 stand for???????????
    }
    if (output_fd == -1) {
    	perror ("open");
    	return 3;
    }
    int count=0;
    while((ret_in = read(input_fd, &buffer, 8192)) > 0){
    	ret_out = write(output_fd, &buffer, (ssize_t)ret_in);
    	count++;
    	if(ret_out != ret_in){
        	/* Write error */
        	perror("write");
            return 4;
        }
    }
    printf("%d\n",BUFSIZ);
    printf("Number of times read/write was called = %d\n",count);
    close(input_fd);close(output_fd);
    return (EXIT_SUCCESS);
}




