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
//
	char c = **argv;
	printf("%s\n","char c = **argv;");
	printf("%s\n//","printf(\"%c\",c);");
	printf("%c\n",c);
	printf("%s\n//","printf(\"%c\",&c);");
	printf("%c\n",&c);

	printf("%s\n//","printf(\"%d\",&\"abcdefg\");");
	printf("%d\n",&"abcdefg");
	printf("%s\n//","printf(\"%d\",\"abcdefg\");");
	printf("%d\n","abcdefg");
	printf("\n");
	char *b = "abcdefg";
	printf("%s\n","char *b = \"abcdefg\";");
	printf("%s\n//","printf(\"%d\",b);");
	printf("%d\n",b);
	printf("%s\n//","printf(\"%s\",b);");
	printf("%s\n",b);
	printf("%s\n//","printf(\"%c\",b);");
	printf("%c\n",b);
}
