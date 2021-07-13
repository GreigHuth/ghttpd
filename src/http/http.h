//Written by Gurg
#define CRLF "\r\n" //Carrige Return Line Feed
#define CR   "\r"
#define LF   "\n"
#define MAX_HEADERS 1024
#define SP " "


typedef enum {
    OPTIONS = 0, 
    GET,
    HEAD,
    POST,
    PUT,
    DELETE,
    TRACE,
    CONNECT
}http_method ;

//represents the different general headers
typedef enum {
    Cache_Control = 0,
    Connection,
    Date,
    Pragma,
    Trailer,
    Transfer_Encoding,
    Upgrade,
    Via,
    Warning

} h_general ;

//represents the different entity headers
typedef enum {  
    Allow = 0,
    Content_Encoding,
    Content_Language,
    Content_Length,
    Content_Location,
    Content_MD5,
    Content_Range,
    Content_Type,
    Expires,
    Last_Modified,
    extension_header

} h_entity ;
