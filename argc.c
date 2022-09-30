#include <stdio.h>
#include <stdlib.h>

/**
 *compile with "gcc argc.c -o add"
 *run " ./add 4 6 8" on the cmd
 *The output will be 4+6+8 = 18
 *Resource: https://www.youtube.com/watch?v=aP1ijjeZc24
 */

int main(int argc, char* argv[]) {
    printf("arg_count = %d\n", argc);
    printf("Content of argv[]\n");
    
    int sum = 0;
    if (argc > 1)
    {
    for(int i=1; i<argc; i++)
    {
	printf("argv[%d]=%s\n",i,argv[i]);
	sum += atoi(argv[i]);
   }
    printf("Total = %d\n", sum);
    }
    return 0;
}
