//
//  main.m
//  TYSMAlgorithm
//
//  Created by jele lam on 2/12/2019.
//  Copyright © 2019 CookiesJ. All rights reserved.
//

#include "array_queue.h"
#include "15_besearch.h"
#include "leecode_724.h"
#include "study/TYSMListNode.cpp"

int main(int argc, const char * argv[]) {
    
//    run_array_queue();
//    run_besearch();
//    run_leecode_724();
    TYSMListNode *head = new TYSMListNode();
    head->addAtHead(2);
    printf("%d",head->get(0));
    head->addAtTail(3);
    printf("%d",head->get(0));
    head->addAtHead(1);
    printf("%d",head->get(0));
    head->addAtTail(5);
    printf("%d",head->get(0));
    head->addAtIndex(3, 4);
    printf("%d",head->get(0));
    head->deleteAtIndex(0);
    printf("%d",head->get(0));
    head->deleteAtIndex(0);
    printf("%d",head->get(0));
    head->deleteAtIndex(0);
    printf("%d",head->get(0));
    head->deleteAtIndex(0);
    printf("%d",head->get(0));
    head->deleteAtIndex(0);
    printf("%d",head->get(0));
    head->deleteAtIndex(0);
    printf("%d",head->get(0));
    return 0;
}
