#test pcm, wav and g729 transfer each other

INC_DIR=./include
#LIBS=./lib32
LIBS=./lib64

CC = gcc 
CFLAGS = -c -Wall -g -o
LDFLAGS = -L$(LIBS) -lrtpconv
INCLUDE = -I$(INC_DIR)
 

tconv: ./src/main.c 
	$(CC) ./src/main.c $(INCLUDE) -L$(LIBS) -lrtpconv  -o $@
	LD_LIBRARY_PATH=$(LIBS) ./tconv ./test/+8613585635985_200_20170605_142330_8013_cd.wav_recv.dat ./test/+8613585635985_200_20170605_142330_8013_cd.wav_send.dat
clean:
	rm -rf tconv

	


	

