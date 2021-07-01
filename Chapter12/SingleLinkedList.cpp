//
// Created by Erik Gabrielsen on 4/14/21.
//

#include "SingleLinkedList.h"

LinkedList::LinkedList() {
  this->head = nullptr;
  this->tail = nullptr;

  this->length = 0;
}

void LinkedList::append(int value) {
  // Created a node with the value stored
  Node *newNode = new Node;
  newNode->data = value;
  newNode->next = nullptr;

  if (this->head == nullptr) {
    this->head = newNode;
    this->tail = newNode;
  } else {
    this->tail->next = newNode;
    this->tail = newNode;
  }

  length++;
}

void LinkedList::display() {
  // Traverse through our linked list
  Node *curr = this->head;
  while (curr != nullptr) {
    std::cout << curr->data << " ";
    curr = curr->next;
  }
  std::cout << std::endl;
}

void LinkedList::remove() {
  if (this->head == nullptr) {
    return;
  }

  Node *temp = this->head;
  this->head = temp->next;
  delete temp;
}
