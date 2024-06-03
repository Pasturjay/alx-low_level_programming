#include <stdio.h>

int main(int argc, char *argv[])
{
    // Subtract 1 from argc because the first argument is the program name
    printf("%d\n", argc - 1);
    return 0;
}

