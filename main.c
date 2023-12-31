#include <stdio.h>
#include "shell.h"

/**
 * main - entry point
 * @ac: arg count
 * @av: arg vector
 *
 * Return: 0 on success, 1 on error
 */

int main(void)
{
    char command[128];
    while (1)
    {
        display_prompt();
        user_input(command, sizeof(command));
        execute_command(command);
    }
    return 0;
}
