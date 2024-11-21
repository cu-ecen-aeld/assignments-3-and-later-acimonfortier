#include <stdio.h>
#include <syslog.h>

int main(int argc, char **argv) {
	openlog(NULL, 0, LOG_USER);
	if (argc !=  3) {
		syslog(LOG_ERR, "Wrong number of arguments.");
		return 1;
	}

	FILE* myFile = fopen(argv[1], "w");
	if (myFile == NULL) {
		syslog(LOG_ERR, "Can't open file %s", argv[1]);
		return 1;
	}
	syslog(LOG_DEBUG, "Writing %s to %s", argv[2], argv[1]);
	if (fputs(argv[2], myFile) == -1) {
		syslog(LOG_ERR, "Error writing to file %s", argv[1]);
		return 1;
	}

	return 0;
}
