# include<unistd.h>
# include<fcntl.h>
# include <stdio.h>

int main(){
	int i=0;
	int fd;
	fd = open("input.txt",O_CREAT | O_RDONLY);
	if(fd==-1){printf("Error");return -1;}
	
	return 0;
}
