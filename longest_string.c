#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        puts("");
    }
    else
    {
        int max_string_id = 1;
        for (int i = 1; i < argc; i++)
        {
            if (strlen(argv[i]) > strlen(argv[max_string_id]))
            {
                max_string_id = i;
            }
        }
        puts(argv[max_string_id]);
    }
    return EXIT_SUCCESS;
}