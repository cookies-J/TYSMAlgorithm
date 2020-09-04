//
//  TYSMListNode.cpp
//  TYSMAlgorithm
//
//  Created by CookiesJ on 31/8/2020.
//  Copyright © 2020 CookiesJ. All rights reserved.
//

//#include "TYSMListNode.hpp"
#include "stdio.h"

class TYSMListNode {

public:
    struct SinglyListNode {
        int val;
        SinglyListNode *next;
        SinglyListNode(int x) : val(x), next(NULL) {

        }
    };
    /** Initialize your data structure here. */
    TYSMListNode() {
        _singlyListNode = new SinglyListNode(-1);
        _size = 0;
    }

    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if (index > _size -1 || index < 0 ) {
            return -1;
        }
        SinglyListNode *currNode = _singlyListNode->next;
        while (index--) {
            currNode = currNode->next;
        }
        return currNode->val;
    }

    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        SinglyListNode *newNode = new SinglyListNode(val);
        newNode->next = _singlyListNode->next;
        _singlyListNode->next = newNode;
        _size++;
    }

    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {

        SinglyListNode *currNode = _singlyListNode;
        while (currNode->next != nullptr) {
            currNode = currNode->next;
        }

        SinglyListNode *newNode = new SinglyListNode(val);
        currNode->next = newNode;
        _size++;
    }

    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if (index > _size || index < 0)    return;

        if (index == 0) {
            this->addAtHead(val);
            return;
        }

        if (index == _size) {
            this->addAtTail(val);
            return;
        }

        SinglyListNode *currNode = _singlyListNode;
        while (index--) {
            currNode = currNode->next;
        }

        SinglyListNode *newNode = new SinglyListNode(val);
        newNode->next = currNode->next;
        currNode->next = newNode;
        _size ++;

    }

    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if (index >_size-1 || index < 0) return;

        SinglyListNode *currNode = _singlyListNode;

        while (index--) {
            currNode = currNode->next;
        }
        SinglyListNode *delNode = currNode->next;
        currNode->next = currNode->next->next;
        delete delNode;
        _size--;
    }

    private :
    int _size;
    SinglyListNode * _singlyListNode;

};
