CC=gcc
CFLAG=-g

all: server client
server:
	$(CC) $(CFLAG) server.c -o server
client:
	$(CC) $(CFLAG) client.c -o client
clean:
	rm server client 	
