#include <stdio.h>
int main(int argc, char **argv){
	//argv = argv[0]
	printf("%s",*argv);
	printf("\n");
	printf("%d",argv);//address of first character of argv
	printf("\n");

	char** ss;//pointer's pointer 
	ss = argv;
	printf("%s",*ss);
	printf("\n");
	printf("%d",ss);
	printf("\n");
	
}
