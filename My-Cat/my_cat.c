#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>
#include <stdlib.h>
#define STDIN 0
#define STDOUT 1
#define STDERR 2
#define BUFSIZ 1000
int error() {
    return(-1);
}

void filecopy(int ifd, int ofd)
{
    int n;
    char buf[BUFSIZ];

    /* read and write using the system calls. */

    while ((n = read(ifd, buf, BUFSIZ)) > 0)
        if (write(ofd, buf, n) != n)
        {
           error();
        }
}

/* cat: concatenate files - read/write/open/close */

int main(int argc, char *argv[])
{
    int fd;

    if (argc == 1)
    {
        /* get from stdin and write to stdout. */
        filecopy(STDIN, STDOUT);
    }
    else
        /* cat all the files one by one. */
        while (--argc > 0)
            if ((fd = open(*++argv, O_RDONLY)) == -1)
            {
                return(-1);
            }
            else
            {
                filecopy(fd, STDOUT);
                close(fd);
            }
    return 0;
}
