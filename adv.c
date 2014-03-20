#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#include "repl.h"
#include "graph.h"

int main(int argc, char *argv[]) {
	char *programName = argv[0];

	/* Parse command line options */
	while(argc > 1) {
		argc--, argv++;
		if( !strcmp(*argv, "-help") ) {
			printf("Help yourself.\n");
			return 0;
		} else {
			fprintf(stderr, "adventure, a tiny quick in-memory graph database.\n\n");
			fprintf(stderr, "Usage: %s [-help]\n", programName);
			return 1;
		}
	}

	/* Provide a REPL */
	return repl("o-> ");
}
