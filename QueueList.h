#if !defined QUEUELIST_H
#define QUEUELIST_H

#include "ListLinked.h"

template < class T >
class QueueList
{

   private:
      ListLinked<T>* list;  //only efficient for a circular, doubly linked list

   public:
      QueueList();
      ~QueueList();

      bool isEmpty();
      int size();
      void dequeueAll(); 

      T* peek();
      T* dequeue();
      void enqueue(T* item);

};

template < class T >
QueueList<T>::QueueList()
{
   list = new ListLinked<T>();
}

template < class T >
QueueList<T>::~QueueList()
{
   delete list;
}

template < class T >
bool QueueList<T>::isEmpty()
{
   return size() == 0;
}

template < class T >
int QueueList<T>::size()
{
   return list->size();
}

template < class T >
T* QueueList<T>::peek()
{
   T* item = NULL;
   if (!isEmpty()) 
   {  
      item = list->get(1);
   }
   return item;
}

//enqueue at the end of the list (has a hidden loop since the list is a linked list)
template < class T >
void QueueList<T>::enqueue(T* item)
{
   int sze = size();
   list->add(sze + 1, item);
}

//dequeue from the front of the list
template < class T >
T* QueueList<T>::dequeue()
{
   T* item = NULL;
   if (!isEmpty()) 
   {  
      item = list->get(1);
      list->remove(1);
   }
   return item;
}

template < class T >
void QueueList<T>::dequeueAll()
{
   delete list;
   list = new ListLinked<T>();
}

#endif
