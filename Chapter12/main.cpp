#include <iostream>

#include "SingleLinkedList.h"

int main() {
  /**
   * @brief
   * Singly Linked Lists
   */
  LinkedList list;

  std::cout << "Inserting elements..." << std::endl;

  list.append(1);
  list.append(2);
  list.append(3);
  list.append(4);

  list.display();

  list.remove();  // 2 3 4
  list.remove();  // 3 4

  list.display();  // 3 4

  return 0;
}
