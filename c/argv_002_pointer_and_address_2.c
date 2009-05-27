#include <stdio.h>
int main(int argc, char **argv){
//pointers
	printf("%s\n//","printf(\"%d\",argv);");
	printf("%d\n",argv);
	printf("%s\n//","printf(\"%d\",*argv);");
	printf("%d\n",*argv);

//these a char value, see http://en.wikipedia.org/wiki/ASCII
	printf("%s\n//","printf(\"%d\",**argv);");
	printf("%d\n",**argv);
	printf("%s\n//","printf(\"%c\",**argv);");
	printf("%c\n",**argv);
	printf("%s\n//","printf(\"%d\",*argv+1);");
	printf("%d\n",**argv+1);
	printf("%s\n//","printf(\"%c\",*argv+1);");
	printf("%c\n",**argv+1);

	char c = **argv;
	printf("%c",c);
	printf("\n");
	printf("%c",&c);
	printf("\n");
		
}
