#include <stdio.h>
int main(int argc, char **argv){
	//argv = argv[0]
	printf("%s",*argv);
	printf("\n");
	printf("%s",argv[0]);
	printf("\n");

	//** is first character of arguments
	printf("%c",**argv);
	printf("\n");
	//argc is count of arguments
	printf("%d",argc);
	printf("\n");
	printf("%d",argv);
	
}
