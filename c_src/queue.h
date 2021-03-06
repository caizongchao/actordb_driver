// This file is part of Emonk released under the MIT license. 
// See the LICENSE file for more information.

/* adapted by: Maas-Maarten Zeeman <mmzeeman@xs4all.nl */

#ifndef ESQLITE_QUEUE_H
#define ESQLITE_QUEUE_H

#include "erl_nif.h"

typedef struct queue_t queue;

queue * queue_create(void (*freecb)(void*));
void queue_destroy(queue *queue);

// int queue_has_item(queue *queue);

int queue_push(queue *queue, void* item);
void* queue_pop(queue *queue);

void* queue_get_item_data(void* item);
void queue_set_item_data(void* item, void *ndata);

void queue_recycle(queue *queue,void* item);

void* queue_get_item(queue *queue);
int queue_size(queue *queue);

// int queue_send(queue *queue, void* item);
// void* queue_receive(queue *);

#endif 
