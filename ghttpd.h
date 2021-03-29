#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <netinet/in.h> 
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <arpa/inet.h>
#include <pthread.h>

#ifdef linux
#include <sys/epoll.h>

#else 
#include <sys/cpuset.h>
#include <pthread_np.h> 
#include <sys/event.h>
#include <sys/sysctl.h>	
#endif
#include <netinet/tcp.h>

#define PORT 1234
#define Q_LEN 16
#define MAX_EVENTS 1024
#define BUFFER_SIZE 1024



//TODO
//[] create struct for HTTP header 

struct http_header{

};
