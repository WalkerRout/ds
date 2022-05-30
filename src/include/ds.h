
#ifndef DS_H
#define DS_H

#ifdef DS_IMPLEMENTATION
#define HEAP_IMPLEMENTATION
#define ARRAY_IMPLEMENTATION
#define LLIST_IMPLEMENTATION
#define BTREE_IMPLEMENTATION
#define STACK_IMPLEMENTATION
#define QUEUE_IMPLEMENTATION
#define GRAPH_IMPLEMENTATION
#define HTABLE_IMPLEMENTATION
#endif // DS_IMPLEMENTATION

#include "heap.h"
#include "llist.h"
#include "btree.h"
#include "array.h"
#include "stack.h"
#include "queue.h"
#include "graph.h"
#include "htable.h"

#ifdef DS_IMPLEMENTATION
#undef HEAP_IMPLEMENTATION
#undef ARRAY_IMPLEMENTATION
#undef LLIST_IMPLEMENTATION
#undef BTREE_IMPLEMENTATION
#undef STACK_IMPLEMENTATION
#undef QUEUE_IMPLEMENTATION
#undef GRAPH_IMPLEMENTATION
#undef HTABLE_IMPLEMENTATION
#endif // DS_IMPLEMENTATION

#endif // DS_H


/*
** TODO:
** - Implement; [C/I represent COMPLETE or INCOMPLETE]
**   - Arrays           [ C ]
**   - Linked Lists     [ I ]
**   - Hash Tables      [ I ]
**   - Stacks           [ I ]
**   - Queues           [ I ]
**   - Binary Trees     [ I ]
**   - Graphs           [ I ]
*/