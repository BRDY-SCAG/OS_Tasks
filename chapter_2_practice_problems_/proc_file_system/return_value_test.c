#include <stdio.h>

#define BUFFER_SIZE 128

int buffer_ () 
{
		int rv = 0;
		char buffer[BUFFER_SIZE];

		rv = sprintf(buffer, "Hello World!\n");

		return rv;
}
int main () {

		int x = buffer_();

		printf("%d\n", x);

		int y = 1209;

		int *y1 = &y;
		
		printf("%p\n", &y1);

}
