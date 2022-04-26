#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    // printf("Number of input arguments: %d\n", argc);

    if (argc == 1)
    {
        puts("");
    }
    else if (argc == 2)
    {
        printf("%s\n", argv[1]);
    }
    else
    {
        int max_string_id = 1;
        for (int i = 2; i < argc; i++)
        {
            if (strlen(argv[i]) > strlen(argv[max_string_id]))
            {
                max_string_id = i;
            }
        }
        printf("%s\n", argv[max_string_id]);
    }

    return EXIT_SUCCESS;
}