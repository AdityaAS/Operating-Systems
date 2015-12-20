#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>


int main(){
	int shm_id;
	
	shm_id = shmget(IPC_PRIVATE, 4*sizeof(int), IPC_CREAT | 0666);
	if(shm_id < 0){
		printf("shmget error\n");
		exit(1);
	}
	
	return 0;
}	
