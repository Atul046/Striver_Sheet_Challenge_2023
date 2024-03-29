// Merge Two Sorted Linked Lists

#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int> *sortTwoLists(Node<int> *first, Node<int> *second) {
  if (first == NULL) {
    return second;
  }
  if (second == NULL) {
    return first;
  }
  Node<int> *newNode = new Node<int>(-1);
  Node<int> *head = newNode;
  Node<int> *tail = newNode;

  Node<int> *head1 = first;
  Node<int> *head2 = second;

  while (head1 != NULL && head2 != NULL) {
    if (head1->data > head2->data) {
      tail->next = head2;
      tail = tail->next;
      head2 = head2->next;
    } else {
      tail->next = head1;
      tail = tail->next;
      head1 = head1->next;
    }
  }

  while (head1 != NULL) {
    tail->next = head1;
    tail = tail->next;
    head1 = head1->next;
  }
  while (head2 != NULL) {
    tail->next = head2;
    tail = tail->next;
    head2 = head2->next;
  }

  head = head->next;
  return head;
}
