//Written by Gurg
//Handle HTTP requests
#include "http.h"

typedef enum {
    Accept = 0,
    Accept_Charset,
    Accept_Encoding,
    Accept_Language,
    Authorisation,
    Expect,
    From,
    Host,
    If_Match,
    If_Mofified_Since,
    If_None_Match,
    If_Range,
    If_Unmodified_Since,
    Max_Forwards,
    Proxy_Authorisation,
    Range,
    Referer,
    TE,
    User_Agent
    } req_header_fields;

struct rq_line{
    http_method method;
    char* host;
    char* request_uri;
};


//different header options
union header_req{
    h_general h_general;
    h_entity h_entity;
    req_header_fields h_rq;
};



//used to store the parameters of an incoming HTTP request
struct http_request{ 
    struct rq_line* request_line;
    union header_req* headers; //this needs to be dynamically allocated, depending on the number of headers
    char* message_body;
};