#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * easy - saves you time
 * @s: commit name
 * Return: nothing
 */

int main()
{
    char s[100];
    printf("Enter commit message: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';  // Remove trailing newline character

    char command[200];
    sprintf(command, "git add . && git commit -m '%s' && git push", s);
    system(command);

    return 0;
}
