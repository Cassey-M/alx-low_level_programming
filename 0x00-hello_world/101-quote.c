#include <unistd.h>
/**
* @brief Main function of the program
* @return 1 to indicate failure
*/
int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t len = sizeof(message);
if (write(STDERR_FILENO, message, len) != len)
return (1);
}
