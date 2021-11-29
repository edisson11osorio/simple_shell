#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#define PROMPT ("$ ")

char *read_input(char **data, size_t *sizebuffer);
void prompt(void);
int main()
{
    char *data = NULL;
    size_t sizebuffer = 0;
    const char *DELIM1 = " ";
    char *token;
    while (1)
    {
        prompt();
        data = read_input(&data, &sizebuffer);
        write(STDOUT_FILENO, data, sizebuffer);
        token = strtok(data, DELIM1);
        while (token != NULL)
        {
            token = strtok(NULL, DELIM1);
            printf("%s\n", token);
        }
    }
    return 0;
}
void prompt(void)
{
    if (isatty(STDIN_FILENO))
    {
        write(STDOUT_FILENO, PROMPT, strlen(PROMPT));
    }
}
char *read_input(char **data, size_t *sizebuffer)
{
    ssize_t charactersRead = 0;
    charactersRead = getline(data, sizebuffer, stdin);
    if (charactersRead == '\0')
    {
        free(*data);
        return (NULL);
    }
    return (*data);
}