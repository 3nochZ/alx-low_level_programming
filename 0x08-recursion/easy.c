#include <stdlib.h>

/**
 * easy - saves you time
 * @s: commit name
 * Return: nothing
 */

void easy(char *s)
{
    char command[100];
    sprintf(command, "git add . && git commit -m '%s' && git push", s);
    system(command);
}
