#include <stdio.h>
#include <stdlib.h>

#define DS_IMPLEMENTATION
#include "include/ds.h"
#undef DS_IMPLEMENTATION
#include "include/dscommon.h"



int main(void){
  LinkedList_si llist1 = {0};
  llist_si_init(&llist1);
  LOG(0);
  return 0;
}