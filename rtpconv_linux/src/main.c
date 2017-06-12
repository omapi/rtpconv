//#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#include "transfer.h"

int main(int argc, char *argv[])
{
	char fbuf1[256];
	char fbuf2[256];
	char fbuf3[256];
	int nset = 0;
	
	if(argc<2 || argc>3){
		printf("args error, format: \n");
		printf("please input: ./tconv ~/*.dat [~/*.dat] 1\nif want to delete dat files, set 0\n");
		return 1;
	}
	memset(fbuf1,0,256);
	memset(fbuf2,0,256);
	memset(fbuf3,0,256);
	if(argc==2){
		strcpy(fbuf1,argv[1]);
		nset=rtpconv(fbuf1, NULL);
	}
	else{
		strcpy(fbuf1,argv[1]);
		strcpy(fbuf2,argv[2]);
		nset=rtpconv(fbuf1, fbuf2);
	}
	
	printf("result: %d\n", nset);
	return 0;
}

