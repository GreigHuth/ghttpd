# G-HTTPD
Gurgs HTTP server, a cross-platform high performance, multithreaded HTTP response server. I wrote this server as part of my dissertation. This server is still in its infancy and as such, only supports HTTP 200 requests. Also contains a minimal tcp client to test the server with.

## Current Features
- Multithreaded

- Leverages EPOLL/KQUEUE system calls to achieve high throughput and low latency.

- Basic HTTP response that can be used for benchmarking clients or hardware.


## Planned Features
- Extend it to support more HTTP responses.

- Extend it to serve HTML and CSS from files on disk. (In Progress)

- Implement better performance tracking features.



## How To Use
`cd src`

`gcc -o ghttpd -pthread ghttpd.c`

`./ghttpd <threads> <HTTP response size> <EPOLL timeout>`

This will run the server on port 1234 on all available interfaces.

