#include <stdio.h>


int main(void)
{
char *s;
	//s = getenv("LOGNAME");
	printf("Value is %d \n", getenv("LOGNAME"));
	if(s==NULL)
		printf("Variable Not Found\n");
	else
		printf("Value is %s \n", s);
}
