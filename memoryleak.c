#include<stdio.h>
#include<stdlib.h>

int main() {
    printf("Hello, this is a test of the emergency broadcast system.\n");

    char *largeStr;

    printf("I'll allocate a bunch of memory an never use it. Use valgrind to detect my leak.\n");

    largeStr = (char *) malloc(10000000);
    printf("Memory successfully requested, but I'm not actually using it, you should see an increase in committed, but not used. Exiting\n");

    return 0;
}
