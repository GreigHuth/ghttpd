//Written By Gurg
//Handle http responses
#include "http.h"

typedef enum{
    Accept_Ranges = 0,
    Age,
    ETag,
    Location,
    Proxy_Authenticate,
    Retry_After,
    Server,
    Vary,
    WWW_Authenticate

}rp_header_fields ;

//HTTP status code and reason
struct status_code{
    char* reason;
    int code;
};


struct status_line{
    char* version[32]; //only supporting 1.1 atm
    struct status_code;
};



//different header options for response
union header_rp{
    h_general h_general;
    h_entity h_entity;
    rp_header_fields h_rq;
};

//main struct to outgoing http reponses
struct http_response{
    struct status_line status_line;
    union header_rp* h_rp; //this needs to be dynamically allocated, depending on the number of headers
    char* message_body;
};