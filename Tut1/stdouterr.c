# include<unistd.h>
# include<fcntl.h>
int main(){
	int i=0;
	int fd;
	for(i=0;i<1024;i++){
		fd=open("input.txt",O_RDWR);
		if(fd==-1){
			write(STDOUT_FILENO,"ERROR",6);	
			write(STDERR_FILENO,"ERROR",6);
			break;
		}
	}
	return 0;
}
