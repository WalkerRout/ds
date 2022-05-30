#ifndef ARRAY_H
#define ARRAY_H



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "dscommon.h"



#define ARRAY_INIT_LENGTH 16

#define array_push_front(arr, value)       ((arr).push_front(&(arr), (value)))
#define array_push_back(arr, value)        ((arr).push_back(&(arr), (value)))
#define array_get(arr, index)              ((arr).get(&(arr), (index)))
#define array_set(arr, index, value)       ((arr).set(&(arr), (index), (value)))
#define array_pop_front(arr)               ((arr).pop_front(&(arr)))
#define array_pop_back(arr)                ((arr).pop_back(&(arr)))
#define array_map(arr, func)               ((arr).map(&(arr), (func)))
#define array_free(arr)                    ((arr).free(&(arr)))
#define array_print(arr)                   ((arr).print(&(arr)))
// Get dereferenced void * of array index
#define array_v_get_d(type, arr, index)    ((type *) (arr).get(&(arr), (index)))



typedef struct _Array_si {
  Data dataType;

  unsigned int count; // array length
  unsigned int initLength; // initial array length
  signed int *data;    // array data

  void (*init)(struct _Array_si *);
  void (*init_ptr)(struct _Array_si *, unsigned int, signed int *);
  void (*init_fill)(struct _Array_si *, unsigned int, signed int);
  struct _Array_si (*init_clone)(struct _Array_si *);
  void (*push_front)(struct _Array_si *, signed int);
  void (*push_back)(struct _Array_si *, signed int);
  signed int (*get)(struct _Array_si *, unsigned int);
  void (*set)(struct _Array_si *, unsigned int, signed int);
  signed int (*pop_front)(struct _Array_si *);
  signed int (*pop_back)(struct _Array_si *);
  void (*map)(struct _Array_si *, signed int (*)(signed int));
  void (*free)(struct _Array_si *);
  void (*print)(struct _Array_si *);
} Array_si;

typedef struct _Array_ui {
  Data dataType;

  unsigned int count; // array length
  unsigned int initLength; // initial array length
  unsigned int *data;  // array data

  void (*init)(struct _Array_ui *);
  void (*init_ptr)(struct _Array_ui *, unsigned int, unsigned int *);
  void (*init_fill)(struct _Array_ui *, unsigned int, unsigned int);
  struct _Array_ui (*init_clone)(struct _Array_ui *);
  void (*push_front)(struct _Array_ui *, unsigned int);
  void (*push_back)(struct _Array_ui *, unsigned int);
  unsigned int (*get)(struct _Array_ui *, unsigned int);
  void (*set)(struct _Array_ui *, unsigned int, unsigned int);
  unsigned int (*pop_front)(struct _Array_ui *);
  unsigned int (*pop_back)(struct _Array_ui *);
  void (*map)(struct _Array_ui *, unsigned int (*)(unsigned int));
  void (*free)(struct _Array_ui *);
  void (*print)(struct _Array_ui *);
} Array_ui;

typedef struct _Array_f {
  Data dataType;

  unsigned int count; // array length
  unsigned int initLength; // initial array length
  float *data;         // array data

  void (*init)(struct _Array_f *);
  void (*init_ptr)(struct _Array_f *, unsigned int, float *);
  void (*init_fill)(struct _Array_f *, unsigned int, float);
  struct _Array_f (*init_clone)(struct _Array_f *);
  void (*push_front)(struct _Array_f *, float);
  void (*push_back)(struct _Array_f *, float);
  float (*get)(struct _Array_f *, unsigned int);
  void (*set)(struct _Array_f *, unsigned int, float);
  float (*pop_front)(struct _Array_f *);
  float (*pop_back)(struct _Array_f *);
  void (*map)(struct _Array_f *, float (*)(float));
  void (*free)(struct _Array_f *);
  void (*print)(struct _Array_f *);
} Array_f;

typedef struct _Array_d {
  Data dataType;

  unsigned int count; // array length
  unsigned int initLength; // initial array length
  double *data;        // array data

  void (*init)(struct _Array_d *);
  void (*init_ptr)(struct _Array_d *, unsigned int, double *);
  void (*init_fill)(struct _Array_d *, unsigned int, double);
  struct _Array_d (*init_clone)(struct _Array_d *);
  void (*push_front)(struct _Array_d *, double);
  void (*push_back)(struct _Array_d *, double);
  double (*get)(struct _Array_d *, unsigned int);
  void (*set)(struct _Array_d *, unsigned int, double);
  double (*pop_front)(struct _Array_d *);
  double (*pop_back)(struct _Array_d *);
  void (*map)(struct _Array_d *, double (*)(double));
  void (*free)(struct _Array_d *);
  void (*print)(struct _Array_d *);
} Array_d;

typedef struct _Array_sc {
  Data dataType;

  unsigned int count; // array length
  unsigned int initLength; // initial array length
  signed char *data;   // array data

  void (*init)(struct _Array_sc *);
  void (*init_ptr)(struct _Array_sc *, unsigned int, signed char *);
  void (*init_fill)(struct _Array_sc *, unsigned int, signed char);
  struct _Array_sc (*init_clone)(struct _Array_sc *);
  void (*push_front)(struct _Array_sc *, signed char);
  void (*push_back)(struct _Array_sc *, signed char);
  signed char (*get)(struct _Array_sc *, unsigned int);
  void (*set)(struct _Array_sc *, unsigned int, signed char);
  signed char (*pop_front)(struct _Array_sc *);
  signed char (*pop_back)(struct _Array_sc *);
  void (*map)(struct _Array_sc *, signed char (*)(signed char));
  void (*free)(struct _Array_sc *);
  void (*print)(struct _Array_sc *);
} Array_sc;

typedef struct _Array_uc {
  Data dataType;

  unsigned int count; // array length
  unsigned int initLength; // initial array length
  unsigned char *data; // array data

  void (*init)(struct _Array_uc *);
  void (*init_ptr)(struct _Array_uc *, unsigned int, unsigned char *);
  void (*init_fill)(struct _Array_uc *, unsigned int, unsigned char);
  struct _Array_uc (*init_clone)(struct _Array_uc *);
  void (*push_front)(struct _Array_uc *, unsigned char);
  void (*push_back)(struct _Array_uc *, unsigned char);
  unsigned char (*get)(struct _Array_uc *, unsigned int);
  void (*set)(struct _Array_uc *, unsigned int, unsigned char);
  unsigned char (*pop_front)(struct _Array_uc *);
  unsigned char (*pop_back)(struct _Array_uc *);
  void (*map)(struct _Array_uc *, unsigned char (*)(unsigned char));
  void (*free)(struct _Array_uc *);
  void (*print)(struct _Array_uc *);
} Array_uc;

typedef struct _Array_s {
  Data dataType;

  unsigned int count; // array length
  unsigned int initLength; // initial array length
  unsigned char **data;// array data

  void (*init)(struct _Array_s *);
  void (*push_front)(struct _Array_s *, unsigned char *);
  void (*push_back)(struct _Array_s *, unsigned char *);
  unsigned char *(*get)(struct _Array_s *, unsigned int);
  void (*set)(struct _Array_s *, unsigned int, unsigned char *);
  unsigned char *(*pop_front)(struct _Array_s *);
  unsigned char *(*pop_back)(struct _Array_s *);
  void (*free)(struct _Array_s *);
  void (*print)(struct _Array_s *);
} Array_s;

typedef struct _Array_v {
  Data dataType;

  unsigned int count; // array length
  unsigned int initLength; // initial array length
  void **data;          // array data

  void (*init)(struct _Array_v *);
  void (*push_front)(struct _Array_v *, void *);
  void (*push_back)(struct _Array_v *, void *);
  void *(*get)(struct _Array_v *, unsigned int);
  void (*set)(struct _Array_v *, unsigned int, void *);
  void *(*pop_front)(struct _Array_v *);
  void *(*pop_back)(struct _Array_v *);
  void (*free)(struct _Array_v *);
  void (*print)(struct _Array_v *);
} Array_v;


 
 
 
 
 
 
 
// Function Prototypes
void array_si_init(Array_si *arr);
void array_si_init_ptr(Array_si *arr, unsigned int ptrLength, signed int *ptr);
void array_si_init_fill(Array_si *arr, unsigned int count, signed int value);
Array_si array_si_init_clone(Array_si *arr);
void array_si_push_front(Array_si *arr, signed int value);
void array_si_push_back(Array_si *arr, signed int value);
signed int array_si_get(Array_si *arr, unsigned int index);
void array_si_set(Array_si *arr, unsigned int index, signed int value);
signed int array_si_pop_front(Array_si *arr);
signed int array_si_pop_back(Array_si *arr);
void array_si_map(Array_si *arr, signed int (*func)(signed int));
void array_si_free(Array_si *arr);
void array_si_print(Array_si *arr);

void array_ui_init(Array_ui *arr);
void array_ui_init_ptr(Array_ui *arr, unsigned int ptrLength, unsigned int *ptr);
void array_ui_init_fill(Array_ui *arr, unsigned int count, unsigned int value);
Array_ui array_ui_clone(Array_ui *arr);
void array_ui_push_front(Array_ui *arr, unsigned int value);
void array_ui_push_back(Array_ui *arr, unsigned int value);
unsigned int array_ui_get(Array_ui *arr, unsigned int index);
void array_ui_set(Array_ui *arr, unsigned int index, unsigned int value);
unsigned int array_ui_pop_front(Array_ui *arr);
unsigned int array_ui_pop_back(Array_ui *arr);
void array_ui_map(Array_ui *arr, unsigned int (*func)(unsigned int));
void array_ui_free(Array_ui *arr);
void array_ui_print(Array_ui *arr);

void array_f_init(Array_f *arr);
void array_f_init_ptr(Array_f *arr,  unsigned int ptrLength, float *ptr);
void array_f_init_fill(Array_f *arr, unsigned int count, float value);
Array_f array_f_clone(Array_f *arr);
void array_f_push_front(Array_f *arr, float value);
void array_f_push_back(Array_f *arr, float value);
float array_f_get(Array_f *arr, unsigned int index);
void array_f_set(Array_f *arr, unsigned int index, float value);
float array_f_pop_front(Array_f *arr);
float array_f_pop_back(Array_f *arr);
void array_f_map(Array_f *arr, float (*func)(float));
void array_f_free(Array_f *arr);
void array_f_print(Array_f *arr);

void array_d_init(Array_d *arr);
void array_d_init_ptr(Array_d *arr, unsigned int ptrLength, double *ptr);
void array_d_init_fill(Array_d *arr, unsigned int count, double value);
Array_d array_d_clone(Array_d *arr);
void array_d_push_front(Array_d *arr, double value);
void array_d_push_back(Array_d *arr, double value);
double array_d_get(Array_d *arr, unsigned int index);
void array_d_set(Array_d *arr, unsigned int index, double value);
double array_d_pop_front(Array_d *arr);
double array_d_pop_back(Array_d *arr);
void array_d_map(Array_d *arr, double (*func)(double));
void array_d_free(Array_d *arr);
void array_d_print(Array_d *arr);

void array_sc_init(Array_sc *arr);
void array_sc_init_ptr(Array_sc *arr, unsigned int ptrLength, signed char *ptr);
void array_sc_init_fill(Array_sc *arr, unsigned int count, signed char value);
Array_sc array_sc_clone(Array_sc *arr);
void array_sc_push_front(Array_sc *arr, signed char value);
void array_sc_push_back(Array_sc *arr, signed char value);
signed char array_sc_get(Array_sc *arr, unsigned int index);
void array_sc_set(Array_sc *arr, unsigned int index, signed char value);
signed char array_sc_pop_front(Array_sc *arr);
signed char array_sc_pop_back(Array_sc *arr);
void array_sc_map(Array_sc *arr, signed char (*func)(signed char));
void array_sc_free(Array_sc *arr);
void array_sc_print(Array_sc *arr);

void array_uc_init(Array_uc *arr);
void array_uc_init_ptr(Array_uc *arr, unsigned int ptrLength, unsigned char *ptr);
void array_uc_init_fill(Array_uc *arr, unsigned int count, unsigned char value);
Array_uc array_uc_clone(Array_uc *arr);
void array_uc_push_front(Array_uc *arr, unsigned char value);
void array_uc_push_back(Array_uc *arr, unsigned char value);
unsigned char array_uc_get(Array_uc *arr, unsigned int index);
void array_uc_set(Array_uc *arr, unsigned int index, unsigned char value);
unsigned char array_uc_pop_front(Array_uc *arr);
unsigned char array_uc_pop_back(Array_uc *arr);
void array_uc_map(Array_uc *arr, unsigned char (*func)(unsigned char));
void array_uc_free(Array_uc *arr);
void array_uc_print(Array_uc *arr);

void array_s_init(Array_s *arr);
void array_s_push_front(Array_s *arr, unsigned char *value);
void array_s_push_back(Array_s *arr, unsigned char *value);
unsigned char *array_s_get(Array_s *arr, unsigned int index);
void array_s_set(Array_s *arr, unsigned int index, unsigned char *value);
unsigned char *array_s_pop_front(Array_s *arr);
unsigned char *array_s_pop_back(Array_s *arr);
void array_s_free(Array_s *arr);
void array_s_print(Array_s *arr);

void array_v_init(Array_v *arr);
void array_v_push_front(Array_v *arr, void *value);
void array_v_push_back(Array_v *arr, void *value);
void *array_v_get(Array_v *arr, unsigned int index);
void array_v_set(Array_v *arr, unsigned int index, void *value);
void *array_v_pop_front(Array_v *arr);
void *array_v_pop_back(Array_v *arr);
void array_v_free(Array_v *arr);

#endif // ARRAY_H





#ifdef ARRAY_IMPLEMENTATION


void array_si_init(Array_si *arr){
  assert(!arr->data && "Array has been initialized before!");

  arr->dataType = SIGNED_INT;
  arr->initLength = ARRAY_INIT_LENGTH;
  arr->count = 0;
  
  arr->init = array_si_init;
  arr->init_ptr = array_si_init_ptr;
  arr->init_fill = array_si_init_fill;
  arr->push_front = array_si_push_front;
  arr->push_back = array_si_push_back;
  arr->get = array_si_get;
  arr->set = array_si_set;
  arr->pop_front = array_si_pop_front;
  arr->pop_back = array_si_pop_back;
  arr->map = array_si_map;
  arr->free = array_si_free;
  arr->print = array_si_print;

  arr->data = MALLOC(signed int, arr->initLength);
}

void array_si_init_ptr(Array_si *arr, unsigned int ptrLength, signed int *ptr){
  assert(!arr->data && "Array has been initialized before!");
  assert(ptrLength >= 0 && "Pointer length must be greater than or equal to zero!");

  arr->dataType = SIGNED_INT;
  arr->initLength = ARRAY_INIT_LENGTH;
  arr->count = ptrLength;
  
  arr->init = array_si_init;
  arr->init_ptr = array_si_init_ptr;
  arr->init_fill = array_si_init_fill;
  arr->push_front = array_si_push_front;
  arr->push_back = array_si_push_back;
  arr->get = array_si_get;
  arr->set = array_si_set;
  arr->pop_front = array_si_pop_front;
  arr->pop_back = array_si_pop_back;
  arr->map = array_si_map;
  arr->free = array_si_free;
  arr->print = array_si_print;

  arr->data = MALLOC(signed int, arr->count);
  memcpy(arr->data, ptr, ptrLength * sizeof(signed int));
}

void array_si_init_fill(Array_si *arr, unsigned int count, signed int value){
  assert(!arr->data && "Array has been initialized before!");
  assert(count >= 0 && "Array count must be greater than or equal to zero!");

  arr->dataType = SIGNED_INT;
  arr->initLength = ARRAY_INIT_LENGTH;
  arr->count = count;
  
  arr->init = array_si_init;
  arr->init_ptr = array_si_init_ptr;
  arr->init_fill = array_si_init_fill;
  arr->push_front = array_si_push_front;
  arr->push_back = array_si_push_back;
  arr->get = array_si_get;
  arr->set = array_si_set;
  arr->pop_front = array_si_pop_front;
  arr->pop_back = array_si_pop_back;
  arr->map = array_si_map;
  arr->free = array_si_free;
  arr->print = array_si_print;

  arr->data = MALLOC(signed int, count);

  for(unsigned int i = 0; i < count; i++){
    arr->data[i] = value;
  }
}

Array_si array_si_init_clone(Array_si *arr){
  Array_si out = {0};
  
  out.dataType = SIGNED_INT;
  
  out.initLength = ARRAY_INIT_LENGTH;
  out.count = arr->count;
  
  out.init = array_si_init;
  out.init_ptr = array_si_init_ptr;
  out.init_fill = array_si_init_fill;
  out.push_front = array_si_push_front;
  out.push_back = array_si_push_back;
  out.get = array_si_get;
  out.set = array_si_set;
  out.pop_front = array_si_pop_front;
  out.pop_back = array_si_pop_back;
  out.map = array_si_map;
  out.free = array_si_free;
  out.print = array_si_print;
  
  out.data = MALLOC(signed int, arr->count);
  memcpy(out.data, arr->data, arr->count * sizeof(signed int));

  return out;
}

void array_si_push_front(Array_si *arr, signed int value){
  // increase the count of the array
  arr->count += 1;
  // allocate another space for data
  if(arr->count >= arr->initLength){
    arr->data = realloc(arr->data, arr->count * sizeof(signed int));
  }

  for(long int i = arr->count-1; i >= 0; i--){
    arr->data[i] = arr->data[i-1];
  }
  
  arr->data[0] = value;
}

void array_si_push_back(Array_si *arr, signed int value){
  arr->count += 1;
  
  if(arr->count >= arr->initLength){
    arr->data = realloc(arr->data, arr->count * sizeof(signed int));
  }

  arr->data[arr->count-1] = value;
}

signed int array_si_get(Array_si *arr, unsigned int index){
  return (index <= arr->count-1) ? arr->data[index] : 0;
}

void array_si_set(Array_si *arr, unsigned int index, signed int value){
  if(index <= arr->count-1){
    arr->data[index] = value;
  }
}

signed int array_si_pop_front(Array_si *arr){
  arr->count--;
  assert(arr->count >= 0);
  
  signed int out = arr->data[0];
  
  for(int i = 1; i < arr->count+1; i++){
    arr->data[i-1] = arr->data[i];
  }
  
  arr->data = realloc(arr->data, arr->count * sizeof(signed int));

  return out;
}

signed int array_si_pop_back(Array_si *arr){
  arr->count--;
  assert(arr->count >= 0);

  signed int out = arr->data[arr->count];

  arr->data = realloc(arr->data, arr->count * sizeof(signed int));

  return out;
}

void array_si_map(Array_si *arr, signed int (*func)(signed int)){
  assert(arr->data);

  for(unsigned int i = 0; i < arr->count; i++){
    arr->data[i] = func(arr->data[i]);
  }
}

void array_si_free(Array_si *arr){
  if(!arr->data) return;
  
  arr->count = -1;
  free(arr->data);
}

void array_si_print(Array_si *arr){
  for(unsigned int i = 0; i < arr->count; i++){
    printf("%d ", arr->data[i]);
  }
  printf("\b\n"); // delete the last space and go to new line
}



void array_ui_init(Array_ui *arr){
  assert(!arr->data && "Array has been initialized before!");

  arr->dataType = UNSIGNED_INT;
  arr->initLength = ARRAY_INIT_LENGTH;
  arr->count = 0;
  
  arr->init = array_ui_init;
  arr->init_ptr = array_ui_init_ptr;
  arr->init_fill = array_ui_init_fill;
  arr->push_front = array_ui_push_front;
  arr->push_back = array_ui_push_back;
  arr->get = array_ui_get;
  arr->set = array_ui_set;
  arr->pop_front = array_ui_pop_front;
  arr->pop_back = array_ui_pop_back;
  arr->map = array_ui_map;
  arr->free = array_ui_free;
  arr->print = array_ui_print;

  arr->data = MALLOC(unsigned int, arr->initLength);
}

void array_ui_init_ptr(Array_ui *arr, unsigned int ptrLength, unsigned int *ptr){
  assert(!arr->data && "Array has been initialized before!");
  assert(ptrLength >= 0 && "Pointer length must be greater than or equal to zero!");

  arr->dataType = UNSIGNED_INT;
  arr->initLength = ARRAY_INIT_LENGTH;
  arr->count = ptrLength;
  
  arr->init = array_ui_init;
  arr->init_ptr = array_ui_init_ptr;
  arr->init_fill = array_ui_init_fill;
  arr->push_front = array_ui_push_front;
  arr->push_back = array_ui_push_back;
  arr->get = array_ui_get;
  arr->set = array_ui_set;
  arr->pop_front = array_ui_pop_front;
  arr->pop_back = array_ui_pop_back;
  arr->map = array_ui_map;
  arr->free = array_ui_free;
  arr->print = array_ui_print;

  arr->data = MALLOC(unsigned int, arr->count);
  memcpy(arr->data, ptr, ptrLength * sizeof(unsigned int));
}

void array_ui_init_fill(Array_ui *arr, unsigned int count, unsigned int value){
  assert(!arr->data && "Array has been initialized before!");
  assert(count >= 0 && "Array count must be greater than or equal to zero!");

  arr->dataType = UNSIGNED_INT;
  arr->initLength = ARRAY_INIT_LENGTH;
  arr->count = count;
  
  arr->init = array_ui_init;
  arr->init_ptr = array_ui_init_ptr;
  arr->init_fill = array_ui_init_fill;
  arr->push_front = array_ui_push_front;
  arr->push_back = array_ui_push_back;
  arr->get = array_ui_get;
  arr->set = array_ui_set;
  arr->pop_front = array_ui_pop_front;
  arr->pop_back = array_ui_pop_back;
  arr->map = array_ui_map;
  arr->free = array_ui_free;
  arr->print = array_ui_print;

  arr->data = MALLOC(unsigned int, count);

  for(unsigned int i = 0; i < count; i++){
    arr->data[i] = value;
  }
}

Array_ui array_ui_init_clone(Array_ui *arr){
  Array_ui out = {0};
  
  out.dataType = UNSIGNED_INT;
  
  out.initLength = ARRAY_INIT_LENGTH;
  out.count = arr->count;
  
  out.init = array_ui_init;
  out.init_ptr = array_ui_init_ptr;
  out.init_fill = array_ui_init_fill;
  out.push_front = array_ui_push_front;
  out.push_back = array_ui_push_back;
  out.get = array_ui_get;
  out.set = array_ui_set;
  out.pop_front = array_ui_pop_front;
  out.pop_back = array_ui_pop_back;
  out.map = array_ui_map;
  out.free = array_ui_free;
  out.print = array_ui_print;
  
  out.data = MALLOC(unsigned int, arr->count);
  memcpy(out.data, arr->data, arr->count * sizeof(unsigned int));

  return out;
}

void array_ui_push_front(Array_ui *arr, unsigned int value){
  // increase the count of the array
  arr->count++;
  // allocate another space for data
  if(arr->count >= arr->initLength){
    arr->data = realloc(arr->data, arr->count * sizeof(unsigned int));
  }
  
  for(long int i = arr->count-1; i >= 0; i--){
    arr->data[i] = arr->data[i-1];
  }

  arr->data[0] = value;
}

void array_ui_push_back(Array_ui *arr, unsigned int value){
  arr->count += 1;
  
  if(arr->count >= arr->initLength){
    arr->data = realloc(arr->data, arr->count * sizeof(unsigned int));
  }

  arr->data[arr->count-1] = value;
}

unsigned int array_ui_get(Array_ui *arr, unsigned int index){
  return (index <= arr->count-1) ? arr->data[index] : 0;
}

void array_ui_set(Array_ui *arr, unsigned int index, unsigned int value){
  if(index <= arr->count-1){
    arr->data[index] = value;
  }
}

unsigned int array_ui_pop_front(Array_ui *arr){
  arr->count--;
  assert(arr->count >= 0);
  
  unsigned int out = arr->data[0];
  
  for(int i = 1; i < arr->count+1; i++){
    arr->data[i-1] = arr->data[i];
  }
  
  arr->data = realloc(arr->data, arr->count * sizeof(unsigned int));

  return out;
}

unsigned int array_ui_pop_back(Array_ui *arr){
  arr->count--;
  assert(arr->count >= 0);

  unsigned int out = arr->data[arr->count];

  arr->data = realloc(arr->data, arr->count * sizeof(unsigned int));

  return out;
}

void array_ui_map(Array_ui *arr, unsigned int (*func)(unsigned int)){
  assert(arr->data);

  for(unsigned int i = 0; i < arr->count; i++){
    arr->data[i] = func(arr->data[i]);
  }
}

void array_ui_free(Array_ui *arr){
  if(!arr->data) return;
  
  arr->count = -1;
  free(arr->data);
}

void array_ui_print(Array_ui *arr){
  for(unsigned int i = 0; i < arr->count; i++){
    printf("%u ", arr->data[i]);
  }
  printf("\b\n"); // delete the last space and go to new line
}



void array_f_init(Array_f *arr){
  assert(!arr->data && "Array has been initialized before!");

  arr->dataType = FLOAT;
  arr->initLength = ARRAY_INIT_LENGTH;
  arr->count = 0;
  
  arr->init = array_f_init;
  arr->init_ptr = array_f_init_ptr;
  arr->init_fill = array_f_init_fill;
  arr->push_front = array_f_push_front;
  arr->push_back = array_f_push_back;
  arr->get = array_f_get;
  arr->set = array_f_set;
  arr->pop_front = array_f_pop_front;
  arr->pop_back = array_f_pop_back;
  arr->map = array_f_map;
  arr->free = array_f_free;
  arr->print = array_f_print;

  arr->data = MALLOC(float, arr->initLength);
}

void array_f_init_ptr(Array_f *arr, unsigned int ptrLength, float *ptr){
  assert(!arr->data && "Array has been initialized before!");
  assert(ptrLength >= 0 && "Pointer length must be greater than or equal to zero!");

  arr->dataType = FLOAT;
  arr->initLength = ARRAY_INIT_LENGTH;
  arr->count = ptrLength;
  
  arr->init = array_f_init;
  arr->init_ptr = array_f_init_ptr;
  arr->init_fill = array_f_init_fill;
  arr->push_front = array_f_push_front;
  arr->push_back = array_f_push_back;
  arr->get = array_f_get;
  arr->set = array_f_set;
  arr->pop_front = array_f_pop_front;
  arr->pop_back = array_f_pop_back;
  arr->map = array_f_map;
  arr->free = array_f_free;
  arr->print = array_f_print;

  arr->data = MALLOC(float, arr->count);
  memcpy(arr->data, ptr, ptrLength * sizeof(float));
}

void array_f_init_fill(Array_f *arr, unsigned int count, float value){
  assert(!arr->data && "Array has been initialized before!");
  assert(count >= 0 && "Array count must be greater than or equal to zero!");

  arr->dataType = FLOAT;
  arr->initLength = ARRAY_INIT_LENGTH;
  arr->count = count;
  
  arr->init = array_f_init;
  arr->init_ptr = array_f_init_ptr;
  arr->init_fill = array_f_init_fill;
  arr->push_front = array_f_push_front;
  arr->push_back = array_f_push_back;
  arr->get = array_f_get;
  arr->set = array_f_set;
  arr->pop_front = array_f_pop_front;
  arr->pop_back = array_f_pop_back;
  arr->map = array_f_map;
  arr->free = array_f_free;
  arr->print = array_f_print;

  arr->data = MALLOC(float, count);

  for(unsigned int i = 0; i < count; i++){
    arr->data[i] = value;
  }
}

Array_f array_f_init_clone(Array_f *arr){
  Array_f out = {0};
  
  out.dataType = FLOAT;
  
  out.initLength = ARRAY_INIT_LENGTH;
  out.count = arr->count;
  
  out.init = array_f_init;
  out.init_ptr = array_f_init_ptr;
  out.init_fill = array_f_init_fill;
  out.push_front = array_f_push_front;
  out.push_back = array_f_push_back;
  out.get = array_f_get;
  out.set = array_f_set;
  out.pop_front = array_f_pop_front;
  out.pop_back = array_f_pop_back;
  out.map = array_f_map;
  out.free = array_f_free;
  out.print = array_f_print;
  
  out.data = MALLOC(float, arr->count);
  memcpy(out.data, arr->data, arr->count * sizeof(float));

  return out;
}

void array_f_push_front(Array_f *arr, float value){
  // increase the count of the array
  arr->count++;
  // allocate another space for data
  if(arr->count >= arr->initLength){
    arr->data = realloc(arr->data, arr->count * sizeof(float));
  }
  
  for(long int i = arr->count-1; i >= 1; i--){
    arr->data[i] = arr->data[i-1];
  }

  arr->data[0] = value;
}

void array_f_push_back(Array_f *arr, float value){
  arr->count += 1;
  
  if(arr->count >= arr->initLength){
    arr->data = realloc(arr->data, arr->count * sizeof(float));
  }

  arr->data[arr->count-1] = value;
}

float array_f_get(Array_f *arr, unsigned int index){
  return (index <= arr->count-1) ? arr->data[index] : 0;
}

void array_f_set(Array_f *arr, unsigned int index, float value){
  if(index <= arr->count-1){
    arr->data[index] = value;
  }
}

float array_f_pop_front(Array_f *arr){
  arr->count--;
  assert(arr->count >= 0);
  
  float out = arr->data[0];
  
  for(int i = 1; i < arr->count+1; i++){
    arr->data[i-1] = arr->data[i];
  }
  
  arr->data = realloc(arr->data, arr->count * sizeof(float));

  return out;
}

float array_f_pop_back(Array_f *arr){
  arr->count--;
  assert(arr->count >= 0);

  float out = arr->data[arr->count];

  arr->data = realloc(arr->data, arr->count * sizeof(float));

  return out;
}

void array_f_map(Array_f *arr, float (*func)(float)){
  assert(arr->data);

  for(unsigned int i = 0; i < arr->count; i++){
    arr->data[i] = func(arr->data[i]);
  }
}

void array_f_free(Array_f *arr){
  if(!arr->data) return;
  
  arr->count = -1;
  free(arr->data);
}

void array_f_print(Array_f *arr){
  for(unsigned int i = 0; i < arr->count; i++){
    printf("%f ", arr->data[i]);
  }
  printf("\b\n"); // delete the last space and go to new line
}



void array_d_init(Array_d *arr){
  assert(!arr->data && "Array has been initialized before!");

  arr->dataType = DOUBLE;
  arr->initLength = ARRAY_INIT_LENGTH;
  arr->count = 0;
  
  arr->init = array_d_init;
  arr->init_ptr = array_d_init_ptr;
  arr->init_fill = array_d_init_fill;
  arr->push_front = array_d_push_front;
  arr->push_back = array_d_push_back;
  arr->get = array_d_get;
  arr->set = array_d_set;
  arr->pop_front = array_d_pop_front;
  arr->pop_back = array_d_pop_back;
  arr->map = array_d_map;
  arr->free = array_d_free;
  arr->print = array_d_print;

  arr->data = MALLOC(double, arr->initLength);
}

void array_d_init_ptr(Array_d *arr, unsigned int ptrLength, double *ptr){
  assert(!arr->data && "Array has been initialized before!");
  assert(ptrLength >= 0 && "Pointer length must be greater than or equal to zero!");

  arr->dataType = DOUBLE;
  arr->initLength = ARRAY_INIT_LENGTH;
  arr->count = ptrLength;
  
  arr->init = array_d_init;
  arr->init_ptr = array_d_init_ptr;
  arr->init_fill = array_d_init_fill;
  arr->push_front = array_d_push_front;
  arr->push_back = array_d_push_back;
  arr->get = array_d_get;
  arr->set = array_d_set;
  arr->pop_front = array_d_pop_front;
  arr->pop_back = array_d_pop_back;
  arr->map = array_d_map;
  arr->free = array_d_free;
  arr->print = array_d_print;

  arr->data = MALLOC(double, arr->count);
  memcpy(arr->data, ptr, ptrLength * sizeof(double));
}

void array_d_init_fill(Array_d *arr, unsigned int count, double value){
  assert(!arr->data && "Array has been initialized before!");
  assert(count >= 0 && "Array count must be greater than or equal to zero!");

  arr->dataType = DOUBLE;
  arr->initLength = ARRAY_INIT_LENGTH;
  arr->count = count;
  
  arr->init = array_d_init;
  arr->init_ptr = array_d_init_ptr;
  arr->init_fill = array_d_init_fill;
  arr->push_front = array_d_push_front;
  arr->push_back = array_d_push_back;
  arr->get = array_d_get;
  arr->set = array_d_set;
  arr->pop_front = array_d_pop_front;
  arr->pop_back = array_d_pop_back;
  arr->map = array_d_map;
  arr->free = array_d_free;
  arr->print = array_d_print;

  arr->data = MALLOC(double, count);

  for(unsigned int i = 0; i < count; i++){
    arr->data[i] = value;
  }
}

Array_d array_d_init_clone(Array_d *arr){
  Array_d out = {0};
  
  out.dataType = DOUBLE;
  out.initLength = ARRAY_INIT_LENGTH;
  out.count = arr->count;
  
  out.init = array_d_init;
  out.init_ptr = array_d_init_ptr;
  out.init_fill = array_d_init_fill;
  out.push_front = array_d_push_front;
  out.push_back = array_d_push_back;
  out.get = array_d_get;
  out.set = array_d_set;
  out.pop_front = array_d_pop_front;
  out.pop_back = array_d_pop_back;
  out.map = array_d_map;
  out.free = array_d_free;
  out.print = array_d_print;
  
  out.data = MALLOC(double, arr->count);
  memcpy(out.data, arr->data, arr->count * sizeof(double));

  return out;
}

void array_d_push_front(Array_d *arr, double value){
  // increase the count of the array
  arr->count++;
  // allocate another space for data
  if(arr->count >= arr->initLength){
    arr->data = realloc(arr->data, arr->count * sizeof(double));
  }
  
  for(long int i = arr->count-1; i >= 1; i--){
    arr->data[i] = arr->data[i-1];
  }

  arr->data[0] = value;
}

void array_d_push_back(Array_d *arr, double value){
  arr->count += 1;
  
  if(arr->count >= arr->initLength){
    arr->data = realloc(arr->data, arr->count * sizeof(double));
  }

  arr->data[arr->count-1] = value;
}

double array_d_get(Array_d *arr, unsigned int index){
  return (index <= arr->count-1) ? arr->data[index] : 0;
}

void array_d_set(Array_d *arr, unsigned int index, double value){
  if(index <= arr->count-1){
    arr->data[index] = value;
  }
}

double array_d_pop_front(Array_d *arr){
  arr->count--;
  assert(arr->count >= 0);
  
  double out = arr->data[0];
  
  for(int i = 1; i < arr->count+1; i++){
    arr->data[i-1] = arr->data[i];
  }
  
  arr->data = realloc(arr->data, arr->count * sizeof(double));

  return out;
}

double array_d_pop_back(Array_d *arr){
  arr->count--;
  assert(arr->count >= 0);

  double out = arr->data[arr->count];

  arr->data = realloc(arr->data, arr->count * sizeof(double));

  return out;
}

void array_d_map(Array_d *arr, double (*func)(double)){
  assert(arr->data);

  for(unsigned int i = 0; i < arr->count; i++){
    arr->data[i] = func(arr->data[i]);
  }
}

void array_d_free(Array_d *arr){
  if(!arr->data) return;
  
  arr->count = -1;
  free(arr->data);
}

void array_d_print(Array_d *arr){
  for(unsigned int i = 0; i < arr->count; i++){
    printf("%lf ", arr->data[i]);
  }
  printf("\b\n"); // delete the last space and go to new line
}



void array_sc_init(Array_sc *arr){
  assert(!arr->data && "Array has been initialized before!");

  arr->dataType = SIGNED_CHAR;
  arr->initLength = ARRAY_INIT_LENGTH;
  arr->count = 0;
  
  arr->init = array_sc_init;
  arr->init_ptr = array_sc_init_ptr;
  arr->init_fill = array_sc_init_fill;
  arr->push_front = array_sc_push_front;
  arr->push_back = array_sc_push_back;
  arr->get = array_sc_get;
  arr->set = array_sc_set;
  arr->pop_front = array_sc_pop_front;
  arr->pop_back = array_sc_pop_back;
  arr->map = array_sc_map;
  arr->free = array_sc_free;
  arr->print = array_sc_print;

  arr->data = MALLOC(signed char, arr->initLength);
}

void array_sc_init_ptr(Array_sc *arr, unsigned int ptrLength, signed char *ptr){
  assert(!arr->data && "Array has been initialized before!");
  assert(ptrLength >= 0 && "Pointer length must be greater than or equal to zero!");

  arr->dataType = SIGNED_CHAR;
  arr->initLength = ARRAY_INIT_LENGTH;
  arr->count = ptrLength;
  
  arr->init = array_sc_init;
  arr->init_ptr = array_sc_init_ptr;
  arr->init_fill = array_sc_init_fill;
  arr->push_front = array_sc_push_front;
  arr->push_back = array_sc_push_back;
  arr->get = array_sc_get;
  arr->set = array_sc_set;
  arr->pop_front = array_sc_pop_front;
  arr->pop_back = array_sc_pop_back;
  arr->map = array_sc_map;
  arr->free = array_sc_free;
  arr->print = array_sc_print;

  arr->data = MALLOC(signed char, arr->count);
  memcpy(arr->data, ptr, ptrLength * sizeof(signed int));
}

void array_sc_init_fill(Array_sc *arr, unsigned int count, signed char value){
  assert(!arr->data && "Array has been initialized before!");
  assert(count >= 0 && "Array count must be greater than or equal to zero!");

  arr->dataType = SIGNED_CHAR;
  arr->initLength = ARRAY_INIT_LENGTH;
  arr->count = count;
  
  arr->init = array_sc_init;
  arr->init_ptr = array_sc_init_ptr;
  arr->init_fill = array_sc_init_fill;
  arr->push_front = array_sc_push_front;
  arr->push_back = array_sc_push_back;
  arr->get = array_sc_get;
  arr->set = array_sc_set;
  arr->pop_front = array_sc_pop_front;
  arr->pop_back = array_sc_pop_back;
  arr->map = array_sc_map;
  arr->free = array_sc_free;
  arr->print = array_sc_print;

  arr->data = MALLOC(signed char, count);

  for(unsigned int i = 0; i < count; i++){
    arr->data[i] = value;
  }
}

Array_sc array_sc_init_clone(Array_sc *arr){
  Array_sc out = {0};
  
  out.dataType = SIGNED_CHAR;
  
  out.initLength = ARRAY_INIT_LENGTH;
  out.count = arr->count;
  
  out.init = array_sc_init;
  out.init_ptr = array_sc_init_ptr;
  out.init_fill = array_sc_init_fill;
  out.push_front = array_sc_push_front;
  out.push_back = array_sc_push_back;
  out.get = array_sc_get;
  out.set = array_sc_set;
  out.pop_front = array_sc_pop_front;
  out.pop_back = array_sc_pop_back;
  out.map = array_sc_map;
  out.free = array_sc_free;
  out.print = array_sc_print;
  
  out.data = MALLOC(signed char, arr->count);
  memcpy(out.data, arr->data, arr->count * sizeof(signed char));

  return out;
}

void array_sc_push_front(Array_sc *arr, signed char value){
  // increase the count of the array
  arr->count++;
  // allocate another space for data
  if(arr->count >= arr->initLength){
    arr->data = realloc(arr->data, arr->count * sizeof(signed char));
  }
  
  for(long int i = arr->count-1; i >= 1; i--){
    arr->data[i] = arr->data[i-1];
  }

  arr->data[0] = value;
}

void array_sc_push_back(Array_sc *arr, signed char value){
  arr->count += 1;
  
  if(arr->count >= arr->initLength){
    arr->data = realloc(arr->data, arr->count * sizeof(signed char));
  }

  arr->data[arr->count-1] = value;
}

signed char array_sc_get(Array_sc *arr, unsigned int index){
  return (index <= arr->count-1) ? arr->data[index] : 0;
}

void array_sc_set(Array_sc *arr, unsigned int index, signed char value){
  if(index <= arr->count-1){
    arr->data[index] = value;
  }
}

signed char array_sc_pop_front(Array_sc *arr){
  arr->count--;
  assert(arr->count >= 0);
  
  signed char out = arr->data[0];
  
  for(int i = 1; i < arr->count+1; i++){
    arr->data[i-1] = arr->data[i];
  }
  
  arr->data = realloc(arr->data, arr->count * sizeof(signed char));

  return out;
}

signed char array_sc_pop_back(Array_sc *arr){
  arr->count--;
  assert(arr->count >= 0);

  signed char out = arr->data[arr->count];

  arr->data = realloc(arr->data, arr->count * sizeof(signed char));

  return out;
}

void array_sc_map(Array_sc *arr, signed char (*func)(signed char)){
  assert(arr->data);

  for(unsigned int i = 0; i < arr->count; i++){
    arr->data[i] = func(arr->data[i]);
  }
}

void array_sc_free(Array_sc *arr){
  if(!arr->data) return;
  
  arr->count = -1;
  free(arr->data);
}

void array_sc_print(Array_sc *arr){
  for(unsigned int i = 0; i < arr->count; i++){
    printf("%c ", arr->data[i]);
  }
  printf("\b\n"); // delete the last space and go to new line
}



void array_uc_init(Array_uc *arr){
  assert(!arr->data && "Array has been initialized before!");

  arr->dataType = UNSIGNED_CHAR;
  arr->initLength = ARRAY_INIT_LENGTH;
  arr->count = 0;
  
  arr->init = array_uc_init;
  arr->init_ptr = array_uc_init_ptr;
  arr->init_fill = array_uc_init_fill;
  arr->push_front = array_uc_push_front;
  arr->push_back = array_uc_push_back;
  arr->get = array_uc_get;
  arr->set = array_uc_set;
  arr->pop_front = array_uc_pop_front;
  arr->pop_back = array_uc_pop_back;
  arr->map = array_uc_map;
  arr->free = array_uc_free;
  arr->print = array_uc_print;

  arr->data = MALLOC(unsigned char, arr->initLength);
}

void array_uc_init_ptr(Array_uc *arr, unsigned int ptrLength, unsigned char *ptr){
  assert(!arr->data && "Array has been initialized before!");
  assert(ptrLength >= 0 && "Pointer length must be greater than or equal to zero!");

  arr->dataType = UNSIGNED_CHAR;
  arr->initLength = ARRAY_INIT_LENGTH;
  arr->count = ptrLength;
  
  arr->init = array_uc_init;
  arr->init_ptr = array_uc_init_ptr;
  arr->init_fill = array_uc_init_fill;
  arr->push_front = array_uc_push_front;
  arr->push_back = array_uc_push_back;
  arr->get = array_uc_get;
  arr->set = array_uc_set;
  arr->pop_front = array_uc_pop_front;
  arr->pop_back = array_uc_pop_back;
  arr->map = array_uc_map;
  arr->free = array_uc_free;
  arr->print = array_uc_print;

  arr->data = MALLOC(unsigned char, arr->count);
  memcpy(arr->data, ptr, ptrLength * sizeof(unsigned char));
}

void array_uc_init_fill(Array_uc *arr, unsigned int count, unsigned char value){
  assert(!arr->data && "Array has been initialized before!");
  assert(count >= 0 && "Array count must be greater than or equal to zero!");

  arr->dataType = UNSIGNED_CHAR;
  arr->initLength = ARRAY_INIT_LENGTH;
  arr->count = count;
  
  arr->init = array_uc_init;
  arr->init_ptr = array_uc_init_ptr;
  arr->init_fill = array_uc_init_fill;
  arr->push_front = array_uc_push_front;
  arr->push_back = array_uc_push_back;
  arr->get = array_uc_get;
  arr->set = array_uc_set;
  arr->pop_front = array_uc_pop_front;
  arr->pop_back = array_uc_pop_back;
  arr->map = array_uc_map;
  arr->free = array_uc_free;
  arr->print = array_uc_print;

  arr->data = MALLOC(unsigned char, count);

  for(unsigned int i = 0; i < count; i++){
    arr->data[i] = value;
  }
}

Array_uc array_uc_init_clone(Array_uc *arr){
  Array_uc out = {0};
  
  out.dataType = UNSIGNED_CHAR;
  out.initLength = ARRAY_INIT_LENGTH;
  out.count = arr->count;
  
  out.init = array_uc_init;
  out.init_ptr = array_uc_init_ptr;
  out.init_fill = array_uc_init_fill;
  out.push_front = array_uc_push_front;
  out.push_back = array_uc_push_back;
  out.get = array_uc_get;
  out.set = array_uc_set;
  out.pop_front = array_uc_pop_front;
  out.pop_back = array_uc_pop_back;
  out.map = array_uc_map;
  out.free = array_uc_free;
  out.print = array_uc_print;
  
  out.data = MALLOC(unsigned char, arr->count);
  memcpy(out.data, arr->data, arr->count * sizeof(unsigned char));

  return out;
}

void array_uc_push_front(Array_uc *arr, unsigned char value){
  // increase the count of the array
  arr->count++;
  // allocate another space for data
  if(arr->count >= arr->initLength){
    arr->data = realloc(arr->data, arr->count * sizeof(unsigned char));
  }
  
  for(long int i = arr->count-1; i >= 1; i--){
    arr->data[i] = arr->data[i-1];
  }

  arr->data[0] = value;
}

void array_uc_push_back(Array_uc *arr, unsigned char value){
  arr->count += 1;
  
  if(arr->count >= arr->initLength){
    arr->data = realloc(arr->data, arr->count * sizeof(unsigned char));
  }

  arr->data[arr->count-1] = value;
}

unsigned char array_uc_get(Array_uc *arr, unsigned int index){
  return (index <= arr->count-1) ? arr->data[index] : 0;
}

void array_uc_set(Array_uc *arr, unsigned int index, unsigned char value){
  if(index <= arr->count-1){
    arr->data[index] = value;
  }
}

unsigned char array_uc_pop_front(Array_uc *arr){
  arr->count--;
  assert(arr->count >= 0);
  
  unsigned int out = arr->data[0];
  
  for(int i = 1; i < arr->count+1; i++){
    arr->data[i-1] = arr->data[i];
  }
  
  arr->data = realloc(arr->data, arr->count * sizeof(unsigned char));

  return out;
}

unsigned char array_uc_pop_back(Array_uc *arr){
  arr->count--;
  assert(arr->count >= 0);

  unsigned char out = arr->data[arr->count];

  arr->data = realloc(arr->data, arr->count * sizeof(unsigned char));

  return out;
}

void array_uc_map(Array_uc *arr, unsigned char (*func)(unsigned char)){
  assert(arr->data);

  for(unsigned int i = 0; i < arr->count; i++){
    arr->data[i] = func(arr->data[i]);
  }
}

void array_uc_free(Array_uc *arr){
  if(!arr->data) return;
  
  arr->count = -1;
  free(arr->data);
}

void array_uc_print(Array_uc *arr){
  for(unsigned int i = 0; i < arr->count; i++){
    printf("%u ", arr->data[i]);
  }
  printf("\b\n"); // delete the last space and go to new line
}



void array_s_init(Array_s *arr){
  assert(!arr->data && "Array has been initialized before!");

  arr->dataType = STRING;
  arr->initLength = ARRAY_INIT_LENGTH;
  arr->count = 0;
  
  arr->init = array_s_init;
  arr->push_front = array_s_push_front;
  arr->push_back = array_s_push_back;
  arr->get = array_s_get;
  arr->set = array_s_set;
  arr->pop_front = array_s_pop_front;
  arr->pop_back = array_s_pop_back;
  arr->print = array_s_print;

  arr->data = MALLOC(unsigned char *, arr->initLength);
}

void array_s_push_front(Array_s *arr, unsigned char *value){
  // increase the count of the array
  arr->count++;
  // allocate another space for data
  if(arr->count >= arr->initLength){
    arr->data = realloc(arr->data, arr->count * sizeof(unsigned char *));
  }
  
  for(long int i = arr->count-1; i >= 1; i--){
    arr->data[i] = arr->data[i-1];
  }

  arr->data[0] = value;
}

void array_s_push_back(Array_s *arr, unsigned char *value){
  arr->count++;
  
  if(arr->count >= arr->initLength){
    arr->data = realloc(arr->data, arr->count * sizeof(unsigned char *));
  }

  arr->data[arr->count-1] = value;
}

unsigned char *array_s_get(Array_s *arr, unsigned int index){
  return (index <= arr->count-1) ? arr->data[index] : NULL;
}

void array_s_set(Array_s *arr, unsigned int index, unsigned char *value){
  if(index <= arr->count-1){
    arr->data[index] = value;
  }
}

unsigned char *array_s_pop_front(Array_s *arr){
  arr->count--;
  assert(arr->count >= 0);
  
  unsigned char *out = arr->data[0];
  
  for(int i = 1; i < arr->count+1; i++){
    arr->data[i-1] = arr->data[i];
  }
  
  arr->data = realloc(arr->data, arr->count * sizeof(unsigned char *));

  return out;
}

unsigned char *array_s_pop_back(Array_s *arr){
  arr->count--;
  assert(arr->count >= 0);

  unsigned char *out = arr->data[arr->count];

  arr->data = realloc(arr->data, arr->count * sizeof(unsigned char *));

  return out;
}

void array_s_free(Array_s *arr){
  if(!arr->data) return;

  arr->count = -1;
  free(arr->data);
}

void array_s_print(Array_s *arr){
  for(unsigned int i = 0; i < arr->count; i++){
    printf("%s\n", arr->data[i]);
  }
}



void array_v_init(Array_v *arr){
  assert(!arr->data && "Array has been initialized before!");

  arr->dataType = VOID;
  arr->initLength = ARRAY_INIT_LENGTH;
  arr->count = 0;
  
  arr->init = array_v_init;
  arr->push_front = array_v_push_front;
  arr->push_back = array_v_push_back;
  arr->get = array_v_get;
  arr->set = array_v_set;
  arr->pop_front = array_v_pop_front;
  arr->pop_back = array_v_pop_back;
  arr->print = NULL;

  arr->data = MALLOC(void *, arr->initLength);
  
}

void array_v_push_front(Array_v *arr, void *value){
  // increase the count of the array
  arr->count++;
  // allocate another space for data
  if(arr->count >= arr->initLength){
    arr->data = realloc(arr->data, arr->count * sizeof(void *));
  }
  
  for(long int i = arr->count-1; i >= 1; i--){
    arr->data[i] = arr->data[i-1];
  }

  arr->data[0] = value;
}

void array_v_push_back(Array_v *arr, void *value){
  arr->count++;
  
  if(arr->count >= arr->initLength){
    arr->data = realloc(arr->data, arr->count * sizeof(void *));
  }

  arr->data[arr->count-1] = value;
}

void *array_v_get(Array_v *arr, unsigned int index){
  return (index <= arr->count-1) ? arr->data[index] : NULL;
}

void array_v_set(Array_v *arr, unsigned int index, void *value){
  if(index <= arr->count-1){
    arr->data[index] = value;
  }
}

void *array_v_pop_front(Array_v *arr){
  arr->count--;
  assert(arr->count >= 0);
  
  void *out = arr->data[0];
  
  for(int i = 1; i < arr->count+1; i++){
    arr->data[i-1] = arr->data[i];
  }
  
  arr->data = realloc(arr->data, arr->count * sizeof(void *));

  return out;
}

void *array_v_pop_back(Array_v *arr){
  arr->count--;
  assert(arr->count >= 0);

  void *out = arr->data[arr->count];

  arr->data = realloc(arr->data, arr->count * sizeof(void *));

  return out;
}

void array_v_free(Array_v *arr){
  if(!arr->data) return;

  arr->count = -1;
  free(arr->data);
}


#endif // ARRAY_IMPLEMENTATION



/* 
** TODO:
**
** - check if count > initLength before 
**   allocating more memory with pop/push methods
** - fix the segfault caused by using 
**   array_<x>_get(&arr, 0) with an index of 0 
**   on an empty array
** - make all array functions static, then create
**   function pointers in each structure that
**   correspond to them. Make macros for executing each function
*/