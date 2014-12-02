#include<stdio.h>
#include<stdlib.h>

int main() {
    printf("Hello, this is a test of the emergency broadcast system.\n");

    int memSizeBytes;
    char *largeStr;

    printf("Run the following command to view current memory usage, and committed memory size\n");
    printf("Enter size, in bytes, of memory to allocate: ");
    scanf("%d", &memSizeBytes);

    largeStr = (char *) malloc(memSizeBytes);
    printf("Memory successfully requested, but I'm not actually using it, you should see an increase in committed, but not used. Press a char and enter to exit: ");
    scanf("%s", &largeStr);

    return 0;
}
