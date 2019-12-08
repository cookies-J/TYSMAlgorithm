//
//  array_queue.c
//  TYSMAlgorithm
//
//  Created by jele lam on 8/12/2019.
//  Copyright © 2019 CookiesJ. All rights reserved.
//

#include "array_queue.h"
#include "string.h"
#include "stdlib.h"
#include "stdio.h"
typedef struct {
    int n;
    int head;
    int tail;
    char string[];
}ArrayQueue;



int enqueue(ArrayQueue *cur_queue , char str) {
    if (cur_queue->tail == cur_queue->n)
        return 0;
    cur_queue->string[cur_queue->tail] = str;
    ++cur_queue->tail;
    return 1;
}

char dequeue(ArrayQueue *cur_queue) {
    if (cur_queue->head == cur_queue->tail) return NULL;
    char s = cur_queue->string[cur_queue->head];
    ++cur_queue->head;
    return s;
}

void ArrayQueues(int len) {
    
    ArrayQueue *queue = (ArrayQueue *)malloc(sizeof(ArrayQueue));
    queue->n = len;
    queue->head = queue->tail = 0;
    for (int i = 0; i < len; i++) {
        int result = enqueue(queue,"b");
        
        if (result) {
            printf("head => %d tail => %d \n",queue->head, queue->tail);
        }
        else
        {
            printf("在 %d 个位置结束\n",i);
        }
    }
    
    for (int i = 0; i < len; i++) {
        char result = dequeue(queue);
        
        if (result) {
            printf("head => %d \t tail => %d \t str => %c \n",queue->head, queue->tail,queue->string[i]);
        }
        else
        {
            printf("在 %d 个位置结束",i);
        }
    }
}

int add(int x, int y) {
    return x+y;
}

void run_array_queue() {
    printf("%d\n",add(10, 10));
    ArrayQueues(100);
    printf("hello world\n");
}
