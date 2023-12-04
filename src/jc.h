#ifndef JC
#define JC

typedef unsigned short int usint;
typedef unsigned int uint;

typedef struct json {} JSON;

//typedef struct object { char* key;  char* val; } OBJECT;

JSON parse(const char*);

#endif
