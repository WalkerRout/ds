#ifndef DSCOMMON_H
#define DSCOMMON_H



#include <stdio.h>
#include <stdlib.h>


#define S1(x) #x
#define S2(x) S1(x)
#define LOG(x) ((x) == 0) ? printf("DS_DEBUG_LOG: File " __FILE__ ", Line " S2(__LINE__) "\n") : printf("DS_DEBUG_LOG: File " __FILE__ ", Line " S2(__LINE__) " - " S2(x) "\n")
#define MALLOC(type, size) (type*) alloc((size) * sizeof(type))



typedef enum {
  SIGNED_INT, UNSIGNED_INT,
  FLOAT, DOUBLE,
  SIGNED_CHAR, UNSIGNED_CHAR,
  STRING,
  VOID
} Data;



void *alloc(size_t size){
  void *mem;
  mem = malloc(size);

  if(mem == NULL){
    printf("Out of memory!\n");
    exit(1);
  }

  return mem;
}
#endif // DSCOMMON_H