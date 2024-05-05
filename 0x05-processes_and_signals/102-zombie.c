#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * infinte_while - run an infinite while loop
 * Return: 0 always
*/
int infinite_while(void)
{
while (1)
{
sleep(1);
}
return (0);
}

/**
 * main -  creates 5 zombie processes
 * Return: 0 always
*/
int main(void)
{
pid_t pid;
char counter = 0;

while (counter < 5)
{
pid = fork();
if (pid > 0)
{
printf("Zombie process created, PID: %d\n", pid);
}
else
exit(0);
}
infinite_while();

return (EXIT_SUCCESS);

}
