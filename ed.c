/* SPDX-License-Identifier: MIT */
#include <stdio.h>

int main()
{
	while (1) {
		char c = getchar();
		if (c == '\n')
			puts("?");
	}

	return (int)'?';
}

