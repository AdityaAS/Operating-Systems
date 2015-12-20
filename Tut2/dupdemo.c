/* Using two open calls on the same file */
//This code shows the importance of dup system call
// without dup the file des are not synced
# include<string.h>
# include<stdio.h>
# include<fcntl.h>
int main(int argc,char **argv){
	int fd1,fd2;
	fd1=open("xyz.txt",O_RDWR | O_TRUNC);
	fd2=open("xyz.txt",O_RDWR | O_TRUNC);
	printf("fd1 file offset before write: %d\n",lseek(fd1,0,SEEK_CUR));
	write(fd1,"hello",strlen("hello"));
	printf("fd2 file offset before write: %d\n",lseek(fd2,0,SEEK_CUR));
	write(fd2,"world",strlen("world"));
	return 0;
}

