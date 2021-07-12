# G-HTTPD
Gurgs HTTP server, a cross-platform high performance, multithreaded HTTP response server. I wrote this server as part of my dissertation. This server is still in its infancy and as such, only supports HTTP 200 requests.

## Current Features
Multithreaded
Leverages EPOLL/KQUEUE system calls to achieve high throughput and low latency.


## Planned Features
Extend it to support more HTTP responses.
Extend it to serve HTML and CSS from files on disk. (In Progress)
Implement better performance tracking features



## How To Use
`cd src`

`gcc -o ghttpd -pthread ghttpd.c`

`./ghttpd <threads> <HTTP response size> <EPOLL timeout>`

This will run the server on port 1234 on all available interfaces.

