#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
        //const char arg2[] = "bob";
        //const char arg2[] = "connie";
        //const char arg2[] = "operator";
        const char arg2[] = "user";

	const char file[] = "/bin/login";
	const char arg0[] = "login";
	const char arg1[] = "-f";

	if (!execlp(file, arg0, arg1, arg2, (char *) NULL)) {
		fprintf(stderr, "Error: %s - %m\n",
			"execlp(file, arg0, arg1, arg2, (char *) NULL)");

		exit(EXIT_FAILURE);
	}

	return 0;
}
