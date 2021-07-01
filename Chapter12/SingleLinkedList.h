//
// Created by Erik Gabrielsen on 4/14/21.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

#include <iostream>

struct Node {
  int data;
  Node *next;
};

class LinkedList {
 public:
  LinkedList();

  void append(int);
  void display();
  void remove();

 private:
  Node *head;
  Node *tail;
  int length;
};

#endif  // LINKEDLIST_LINKEDLIST_H
