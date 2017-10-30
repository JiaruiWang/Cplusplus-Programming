#ifndef SORTEDLINKEDLIST_H
#define SORTEDLINKEDLIST_H
#include "linkedlist.h"

class SortedLinkedList : public LinkedList
{
public:
  int* insert(int num);
  int* erase(int num);
  int* find(int num); 
}; //


#endif