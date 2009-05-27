#include <stdio.h>
int main(int argc, char **argv){
//this is bad example
	printf("%c",*argv);
	printf("\n");
//should printf("%s",*argv);
	printf("%s",*argv);
	printf("\n");
}
