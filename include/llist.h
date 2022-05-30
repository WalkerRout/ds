#ifndef LLIST_H
#define LLIST_H



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "dscommon.h"



#define llist_push_front(llist, value)       ((llist).push_front(&(llist), (value)))
#define llist_push_back(llist, value)        ((llist).push_back(&(llist), (value)))
#define llist_get(llist, index)              ((llist).get(&(llist), (index)))
#define llist_set(llist, index, value)       ((llist).set(&(llist), (index), (value)))
#define llist_pop_front(llist)               ((llist).pop_front(&(llist)))
#define llist_pop_back(llist)                ((llist).pop_back(&(llist)))
#define llist_map(llist, func)               ((llist).map(&(llist), (func)))
#define llist_free(llist)                    ((llist).free(&(llist)))
#define llist_print(llist)                   ((llist).print(&(llist)))



typedef struct _Node_si {
  struct _Node_si *next;

  signed int data;
} Node_si;

typedef struct _Node_ui {
  struct _Node_ui *next;

  unsigned int data;
} Node_ui;

typedef struct _Node_f {
  struct _Node_f *next;

  float data;
} Node_f;

typedef struct _Node_d {
  struct _Node_d *next;

  double data;
} Node_d;

typedef struct _Node_sc {
  struct _Node_sc *next;

  signed char data;
} Node_sc;

typedef struct _Node_uc {
  struct _Node_uc *next;

  unsigned char data;
} Node_uc;

typedef struct _Node_s {
  struct _Node_s *next;

  char *data;
} Node_s;

typedef struct _Node_v {
  struct _Node_v *next;

  void *data;
} Node_v;



typedef struct _LinkedList_si {
  Data dataType;

  unsigned int count; // element count
  Node_si *head;

  void (*init)(struct _LinkedList_si *);
  void (*init_ptr)(struct _LinkedList_si *, unsigned int, signed int *);
  void (*init_fill)(struct _LinkedList_si *, unsigned int, signed int);
  struct _LinkedList_si (*init_clone)(struct _LinkedList_si *);
  void (*push_front)(struct _LinkedList_si *, signed int);
  void (*push_back)(struct _LinkedList_si *, signed int);
  signed int (*get)(struct _LinkedList_si *, unsigned int);
  void (*set)(struct _LinkedList_si *, unsigned int, signed int);
  signed int (*pop_front)(struct _LinkedList_si *);
  signed int (*pop_back)(struct _LinkedList_si *);
  void (*map)(struct _LinkedList_si *, signed int (*)(signed int));
  void (*free)(struct _LinkedList_si *);
  void (*print)(struct _LinkedList_si *);
} LinkedList_si;

typedef struct _LinkedList_ui {
  Data dataType;

  unsigned int count; // element count
  Node_ui *head;

  void (*init)(struct _LinkedList_ui *);
  void (*init_ptr)(struct _LinkedList_ui *, unsigned int, unsigned int *);
  void (*init_fill)(struct _LinkedList_ui *, unsigned int, unsigned int);
  struct _LinkedList_ui (*init_clone)(struct _LinkedList_ui *);
  void (*push_front)(struct _LinkedList_ui *, unsigned int);
  void (*push_back)(struct _LinkedList_ui *, unsigned int);
  unsigned int (*get)(struct _LinkedList_ui *, unsigned int);
  void (*set)(struct _LinkedList_ui *, unsigned int, unsigned int);
  unsigned int (*pop_front)(struct _LinkedList_ui *);
  unsigned int (*pop_back)(struct _LinkedList_ui *);
  void (*map)(struct _LinkedList_ui *, unsigned int (*)(unsigned int));
  void (*free)(struct _LinkedList_ui *);
  void (*print)(struct _LinkedList_ui *);
} LinkedList_ui;


typedef struct _LinkedList_f {
  Data dataType;

  unsigned int count; // element count
  Node_f *head;

  void (*init)(struct _LinkedList_f *);
  void (*init_ptr)(struct _LinkedList_f *, unsigned int, float *);
  void (*init_fill)(struct _LinkedList_f *, unsigned int, float);
  struct _LinkedList_f (*init_clone)(struct _LinkedList_f *);
  void (*push_front)(struct _LinkedList_f *, float);
  void (*push_back)(struct _LinkedList_f *, float);
  float (*get)(struct _LinkedList_f *, unsigned int);
  void (*set)(struct _LinkedList_f *, unsigned int, float);
  float (*pop_front)(struct _LinkedList_f *);
  float (*pop_back)(struct _LinkedList_f *);
  void (*map)(struct _LinkedList_f *, float (*)(float));
  void (*free)(struct _LinkedList_f *);
  void (*print)(struct _LinkedList_f *);
} LinkedList_f;

typedef struct _LinkedList_d {
  Data dataType;

  unsigned int count; // element count
  Node_d *head;

  void (*init)(struct _LinkedList_d *);
  void (*init_ptr)(struct _LinkedList_d *, unsigned int, double *);
  void (*init_fill)(struct _LinkedList_d *, unsigned int, double);
  struct _LinkedList_d (*init_clone)(struct _LinkedList_d *);
  void (*push_front)(struct _LinkedList_d *, double);
  void (*push_back)(struct _LinkedList_d *, double);
  double (*get)(struct _LinkedList_d *, unsigned int);
  void (*set)(struct _LinkedList_d *, unsigned int, double);
  double (*pop_front)(struct _LinkedList_d *);
  double (*pop_back)(struct _LinkedList_d *);
  void (*map)(struct _LinkedList_d *, double (*)(double));
  void (*free)(struct _LinkedList_d *);
  void (*print)(struct _LinkedList_d *);
} LinkedList_d;

typedef struct _LinkedList_sc {
  Data dataType;

  unsigned int count; // element count
  Node_sc *head;

  void (*init)(struct _LinkedList_sc *);
  void (*init_ptr)(struct _LinkedList_sc *, unsigned int, signed char *);
  void (*init_fill)(struct _LinkedList_sc *, unsigned int, signed char);
  struct _LinkedList_sc (*init_clone)(struct _LinkedList_sc *);
  void (*push_front)(struct _LinkedList_sc *, signed char);
  void (*push_back)(struct _LinkedList_sc *, signed char);
  signed char (*get)(struct _LinkedList_sc *, unsigned int);
  void (*set)(struct _LinkedList_sc *, unsigned int, signed char);
  signed char (*pop_front)(struct _LinkedList_sc *);
  signed char (*pop_back)(struct _LinkedList_sc *);
  void (*map)(struct _LinkedList_sc *, signed char (*)(signed char));
  void (*free)(struct _LinkedList_sc *);
  void (*print)(struct _LinkedList_sc *);
} LinkedList_sc;

typedef struct _LinkedList_uc {
  Data dataType;

  unsigned int count; // element count
  Node_uc *head;

  void (*init)(struct _LinkedList_uc *);
  void (*init_ptr)(struct _LinkedList_uc *, unsigned int, unsigned char *);
  void (*init_fill)(struct _LinkedList_uc *, unsigned int, unsigned char);
  struct _LinkedList_uc (*init_clone)(struct _LinkedList_uc *);
  void (*push_front)(struct _LinkedList_uc *, unsigned char);
  void (*push_back)(struct _LinkedList_uc *, unsigned char);
  unsigned char (*get)(struct _LinkedList_uc *, unsigned int);
  void (*set)(struct _LinkedList_uc *, unsigned int, unsigned char);
  unsigned char (*pop_front)(struct _LinkedList_uc *);
  unsigned char (*pop_back)(struct _LinkedList_uc *);
  void (*map)(struct _LinkedList_uc *, unsigned char (*)(unsigned char));
  void (*free)(struct _LinkedList_uc *);
  void (*print)(struct _LinkedList_uc *);
} LinkedList_uc;

typedef struct _LinkedList_s {
  Data dataType;

  unsigned int count; // element count
  Node_s *head;

  void (*init)(struct _LinkedList_s *);
  void (*push_front)(struct _LinkedList_s *, unsigned char *);
  void (*push_back)(struct _LinkedList_s *, unsigned char *);
  unsigned char *(*get)(struct _LinkedList_s *, unsigned int);
  void (*set)(struct _LinkedList_s *, unsigned int, unsigned char *);
  unsigned char *(*pop_front)(struct _LinkedList_s *);
  unsigned char *(*pop_back)(struct _LinkedList_s *);
  void (*free)(struct _LinkedList_s *);
  void (*print)(struct _LinkedList_s *);
} LinkedList_s;

typedef struct _LinkedList_v {
  Data dataType;

  unsigned int count; // element count
  Node_v *head;

  void (*init)(struct _LinkedList_v *);
  void (*push_front)(struct _LinkedList_v *, void *);
  void (*push_back)(struct _LinkedList_v *, void *);
  void *(*get)(struct _LinkedList_v *, unsigned int);
  void (*set)(struct _LinkedList_v *, unsigned int, void *);
  void *(*pop_front)(struct _LinkedList_v *);
  void *(*pop_back)(struct _LinkedList_v *);
  void (*free)(struct _LinkedList_v *);
  void (*print)(struct _LinkedList_v *);
} LinkedList_v;



void llist_si_init(LinkedList_si *llist);
void llist_si_init_ptr(LinkedList_si *llist, unsigned int ptrLength, signed int *ptr);
void llist_si_init_fill(LinkedList_si *llist, unsigned int count, signed int value);
LinkedList_si llist_si_init_clone(LinkedList_si *llist);
void llist_si_push_front(LinkedList_si *llist, signed int value);
void llist_si_push_back(LinkedList_si *llist, signed int value);
signed int llist_si_get(LinkedList_si *llist, unsigned int index);
void llist_si_set(LinkedList_si *llist, unsigned int index, signed int value);
signed int llist_si_pop_front(LinkedList_si *llist);
signed int llist_si_pop_back(LinkedList_si *llist);
void llist_si_map(LinkedList_si *llist, signed int (*func)(signed int));
void llist_si_free(LinkedList_si *llist);
void llist_si_print(LinkedList_si *llist);

void llist_ui_init(LinkedList_ui *llist);
void llist_ui_init_ptr(LinkedList_ui *llist, unsigned int ptrLength, unsigned int *ptr);
void llist_ui_init_fill(LinkedList_ui *llist, unsigned int count, unsigned int value);
LinkedList_ui llist_ui_init_clone(LinkedList_ui *llist);
void llist_ui_push_front(LinkedList_ui *llist, unsigned int value);
void llist_ui_push_back(LinkedList_ui *llist, unsigned int value);
unsigned int llist_ui_get(LinkedList_ui *llist, unsigned int index);
void llist_ui_set(LinkedList_ui *llist, unsigned int index, unsigned int value);
unsigned int llist_ui_pop_front(LinkedList_ui *llist);
unsigned int llist_ui_pop_back(LinkedList_ui *llist);
void llist_ui_map(LinkedList_ui *llist, unsigned int (*func)(unsigned int));
void llist_ui_free(LinkedList_ui *llist);
void llist_ui_print(LinkedList_ui *llist);

void llist_f_init(LinkedList_f *llist);
void llist_f_init_ptr(LinkedList_f *llist, unsigned int ptrLength, float *ptr);
void llist_f_init_fill(LinkedList_f *llist, unsigned int count, float value);
LinkedList_f llist_f_init_clone(LinkedList_f *llist);
void llist_f_push_front(LinkedList_f *llist, float value);
void llist_f_push_back(LinkedList_f *llist, float value);
float llist_f_get(LinkedList_f *llist, unsigned int index);
void llist_f_set(LinkedList_f *llist, unsigned int index, float value);
float llist_f_pop_front(LinkedList_f *llist);
float llist_f_pop_back(LinkedList_f *llist);
void llist_f_map(LinkedList_f *llist, float (*func)(float));
void llist_f_free(LinkedList_f *llist);
void llist_f_print(LinkedList_f *llist);

void llist_d_init(LinkedList_d *llist);
void llist_d_init_ptr(LinkedList_d *llist, unsigned int ptrLength, double *ptr);
void llist_d_init_fill(LinkedList_d *llist, unsigned int count, double value);
LinkedList_d llist_d_init_clone(LinkedList_d *llist);
void llist_d_push_front(LinkedList_d *llist, double value);
void llist_d_push_back(LinkedList_d *llist, double value);
double llist_d_get(LinkedList_d *llist, unsigned int index);
void llist_d_set(LinkedList_d *llist, unsigned int index, double value);
double llist_d_pop_front(LinkedList_d *llist);
double llist_d_pop_back(LinkedList_d *llist);
void llist_d_map(LinkedList_d *llist, double (*func)(double));
void llist_d_free(LinkedList_d *llist);
void llist_d_print(LinkedList_d *llist);

void llist_sc_init(LinkedList_sc *llist);
void llist_sc_init_ptr(LinkedList_sc *llist, unsigned int ptrLength, signed char *ptr);
void llist_sc_init_fill(LinkedList_sc *llist, unsigned int count, signed char value);
LinkedList_sc llist_sc_init_clone(LinkedList_sc *llist);
void llist_sc_push_front(LinkedList_sc *llist, signed char value);
void llist_sc_push_back(LinkedList_sc *llist, signed char value);
signed char llist_sc_get(LinkedList_sc *llist, unsigned int index);
void llist_sc_set(LinkedList_sc *llist, unsigned int index, signed char value);
signed char llist_sc_pop_front(LinkedList_sc *llist);
signed char llist_sc_pop_back(LinkedList_sc *llist);
void llist_sc_map(LinkedList_sc *llist, signed char (*func)(signed char));
void llist_sc_free(LinkedList_sc *llist);
void llist_sc_print(LinkedList_sc *llist);

void llist_uc_init(LinkedList_uc *llist);
void llist_uc_init_ptr(LinkedList_uc *llist, unsigned int ptrLength, unsigned char *ptr);
void llist_uc_init_fill(LinkedList_uc *llist, unsigned int count, unsigned char value);
LinkedList_uc llist_uc_init_clone(LinkedList_uc *llist);
void llist_uc_push_front(LinkedList_uc *llist, unsigned char value);
void llist_uc_push_back(LinkedList_uc *llist, unsigned char value);
unsigned char llist_uc_get(LinkedList_uc *llist, unsigned int index);
void llist_uc_set(LinkedList_uc *llist, unsigned int index, unsigned char value);
unsigned char llist_uc_pop_front(LinkedList_uc *llist);
unsigned char llist_uc_pop_back(LinkedList_uc *llist);
void llist_uc_map(LinkedList_uc *llist, unsigned char (*func)(unsigned char));
void llist_uc_free(LinkedList_uc *llist);
void llist_uc_print(LinkedList_uc *llist);

void llist_s_init(LinkedList_s *llist);
void llist_s_push_front(LinkedList_s *llist, char *value);
void llist_s_push_back(LinkedList_s *llist, char *value);
char *llist_s_get(LinkedList_s *llist, unsigned int index);
void llist_s_set(LinkedList_s *llist, unsigned int index, char *value);
char *llist_s_pop_front(LinkedList_s *llist);
char *llist_s_pop_back(LinkedList_s *llist);
void llist_s_free(LinkedList_s *llist);

void llist_v_init(LinkedList_v *llist);
void llist_v_push_front(LinkedList_v *llist, void *value);
void llist_v_push_back(LinkedList_v *llist, void *value);
void *llist_v_get(LinkedList_v *llist, unsigned int index);
void llist_v_set(LinkedList_v *llist, unsigned int index, void *value);
void *llist_v_pop_front(LinkedList_v *llist);
void *llist_v_pop_back(LinkedList_v *llist);
void llist_v_free(LinkedList_v *llist);


#endif // LLIST_H





#ifdef LLIST_IMPLEMENTATION



void llist_si_init(LinkedList_si *llist){
  assert(!llist->head && "LinkedList has been initialized before!");

  llist->dataType = SIGNED_INT;
  llist->count = 0;
  
  llist->init = llist_si_init;
  llist->init_ptr = llist_si_init_ptr;
  llist->init_fill = llist_si_init_fill;
  llist->push_front = llist_si_push_front;
  llist->push_back = llist_si_push_back;
  llist->get = llist_si_get;
  llist->set = llist_si_set;
  llist->pop_front = llist_si_pop_front;
  llist->pop_back = llist_si_pop_back;
  llist->map = llist_si_map;
  llist->free = llist_si_free;
  llist->print = llist_si_print;
  
  llist->head = NULL;
}

void llist_si_init_ptr(LinkedList_si *llist, unsigned int ptrLength, signed int *ptr){
  assert(!llist->head && "LinkedList has been initialized before!");

  llist->dataType = SIGNED_INT;
  llist->count = 0;
  
  llist->init = llist_si_init;
  llist->init_ptr = llist_si_init_ptr;
  llist->init_fill = llist_si_init_fill;
  llist->push_front = llist_si_push_front;
  llist->push_back = llist_si_push_back;
  llist->get = llist_si_get;
  llist->set = llist_si_set;
  llist->pop_front = llist_si_pop_front;
  llist->pop_back = llist_si_pop_back;
  llist->map = llist_si_map;
  llist->free = llist_si_free;
  llist->print = llist_si_print;
  
  llist->head = NULL;
}

void llist_si_init_fill(LinkedList_si *llist, unsigned int count, signed int value){
  assert(!llist->head && "LinkedList has been initialized before!");

  llist->dataType = SIGNED_INT;
  llist->count = count;
  
  llist->init = llist_si_init;
  llist->init_ptr = llist_si_init_ptr;
  llist->init_fill = llist_si_init_fill;
  llist->push_front = llist_si_push_front;
  llist->push_back = llist_si_push_back;
  llist->get = llist_si_get;
  llist->set = llist_si_set;
  llist->pop_front = llist_si_pop_front;
  llist->pop_back = llist_si_pop_back;
  llist->map = llist_si_map;
  llist->free = llist_si_free;
  llist->print = llist_si_print;
  
  llist->head = MALLOC(Node_si, 1);
  llist->head->data = value;
  llist->head->next = MALLOC(Node_si, 1);

  Node_si *ptr = llist->head;
  
  for(int i = 0; i < count; i++){
    ptr->data = value;
    ptr->next = MALLOC(Node_si, 1);
    
    ptr = ptr->next;
  }

  ptr->next = NULL; // Last element has no next node
}

LinkedList_si llist_si_init_clone(LinkedList_si *llist){
  LinkedList_si res = {0};
  res.dataType = llist->dataType;
  res.count = llist->count;
  
  res.init = llist_si_init;
  res.init_ptr = llist_si_init_ptr;
  res.init_fill = llist_si_init_fill;
  res.push_front = llist_si_push_front;
  res.push_back = llist_si_push_back;
  res.get = llist_si_get;
  res.set = llist_si_set;
  res.pop_front = llist_si_pop_front;
  res.pop_back = llist_si_pop_back;
  res.map = llist_si_map;
  res.free = llist_si_free;
  res.print = llist_si_print;

  if(llist->count != 0){
    res.head = MALLOC(Node_si, 1);
  } else {
    res.head = NULL;
    return res;
  }

  Node_si *resPtr = res.head;
  Node_si *ptr = llist->head;

  while(ptr->next != NULL){
    resPtr->data = ptr->data;
    resPtr->next = MALLOC(Node_si, 1);

    resPtr = resPtr->next;
    ptr = ptr->next;
  }
  return res;
}

void llist_si_push_front(LinkedList_si *llist, signed int value){
  
}

void llist_si_push_back(LinkedList_si *llist, signed int value){
  
}

signed int llist_si_get(LinkedList_si *llist, unsigned int index){
  
}

void llist_si_set(LinkedList_si *llist, unsigned int index, signed int value){
  
}

signed int llist_si_pop_front(LinkedList_si *llist){
  
}

signed int llist_si_pop_back(LinkedList_si *llist){
  
}

void llist_si_map(LinkedList_si *llist, signed int (*func)(signed int)){
  
}

void llist_si_free(LinkedList_si *llist){
  
}

void llist_si_print(LinkedList_si *llist){
  Node_si *ptr = llist->head;
  while(ptr->next != NULL){
    printf("%d ", ptr->data);
    ptr = ptr->next;
  }
  printf("\b\n");
}



#endif // LLIST_IMPLEMENTATION




// Use memcpy for void * init clone; will need to duplicate the bytes into a new array