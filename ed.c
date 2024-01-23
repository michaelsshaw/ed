/* SPDX-License-Identifier: MIT */
#include <stdio.h>
#include <signal.h>

void sigint(int signo)
{
	puts("\n?");
}

int main()
{
	signal(SIGINT, sigint);

	while (1) {
		char c = getchar();
		if (c == '\n')
			puts("?");
	}

	return (int)'?';
}

