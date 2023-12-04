#include "jc.h"

void scpy(char* destination, const char* src, uint n) {
  while (n--) {
    *destination = *src;
    destination++;
    src++;
  }
  destination = '\0';
}

uint slen(char* str) {
  uint n;
  for (n = 0; str[n]; n++);
  return n;
}

void var_array(char*** src, char* t, int n) {
  char* a[(n+1)];
  for (int num = 0; num < n; num++) {
    a[num] = *((*src)++);
  }
  a[n] = t;
  *src = a;
}


void tokenizer(const char* str) {

}

JSON parse(const char* val) { 
}
