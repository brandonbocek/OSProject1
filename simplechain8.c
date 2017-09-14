#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>

int main (int argc, char *argv[]) {

	pid_t childpid = 0;
	int i, n, c;

	/*  Added count for the for-loop in step 8 and need 3 args */
	int count = 0;

	char firstMsg[100] = "";
	char aMsg[100] = "";
	char bMsg[100] = "";
	char cMsg[100] = "";
	char dMsg[100] = "";
	char otherMsg[100] = "";
	
	if (argc != 3){ /* check for valid number of command-line arguments */
		fprintf(stderr, "Usage: %s processes\n", argv[0]);
			return 1;
	}

	while((c=getopt(argc, argv, "abcd")) != -1) {
		if(!isdigit(optopt)){
			strcat(firstMsg, argv[0]);
			strcat(firstMsg, ": Error: Input is not a digit");
			perror(firstMsg);
		}
		switch(c) {
			case 'a':
				strcat(aMsg, argv[0]);
				strcat(aMsg, ": Error: Not enough memory");				
				perror(aMsg);
				break;
			case 'b':
				strcat(bMsg, argv[0]);
				strcat(bMsg, ": Error: Too many files open");
				perror(bMsg);
				break;
			case 'c':
				strcat(cMsg, argv[0]);
				strcat(cMsg, ": Error: Failed to find inputs");
				perror(cMsg);
				break;
			case 'd':
				strcat(dMsg, argv[0]);
				strcat(dMsg, ": Error: No connection to the server");
				perror(dMsg);
				break;
			case '?':
				strcat(otherMsg, argv[0]);
				strcat(otherMsg, ": Error: Unidentified input");
				perror(otherMsg);
				break;
			default:
				break;
		}

	}

	n = atoi(argv[1]);
	
	for (i = 1; i < n; i++)
		if (childpid = fork())
			break;
/*
	fprintf(stderr, "i:%d process ID:%ld parent ID:%ld child ID:%ld\n",
		i, (long)getpid(), (long)getppid(), (long)childpid);
*/
	int nchars = atoi(argv[2]);
	char myBuf[nchars];
	int j = 0;
	while(j < nchars) {
		scanf("%c", &myBuf[j]);
		j++;
	}
	
	myBuf[j] = '\0';

	fprintf(stderr, "\n%s and process ID: %d", myBuf, (long)getpid());
	
	printf("\n");

	return 0;
}
