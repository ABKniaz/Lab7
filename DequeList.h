#if !defined (DEQUELIST_H)
#define DEQUELIST_H

#include "ListLinked.h"

template < class T >
class DequeList
{

   private:
      ListLinked<T>* list;  //only efficient for a circular, doubly linked list

   public:
      DequeList();
      ~DequeList();

      bool isEmpty();
      int size();
      void dequeueAll();

      T* peek();
      void enqueue(T* item);
      T* dequeue();

      T* peekDeque();
      void enqueueDeque(T* item);
      T* dequeueDeque();

};

template < class T >
DequeList<T>::DequeList() 
{
   dequeueAll();
}  

template < class T >
DequeList<T>::~DequeList() 
{
   delete list;
} 

template < class T >
bool DequeList<T>::isEmpty() 
{
   return list->size() == 0;
}  

template < class T >
int DequeList<T>::size()
{
   return list->size();
}

template < class T >
void DequeList<T>::dequeueAll() 
{
   delete list;
   list = new ListLinked<T>();
} 

template < class T >
T* DequeList<T>::peek()
{
   T* item = NULL;
   if (!isEmpty())
   {  
      item = list->get(1);
   }
   return item;
} 

template < class T >
void DequeList<T>::enqueue(T* item)
{
   int sze = size();
   list->add(sze + 1, item);
} 

template < class T >
T* DequeList<T>::dequeue() 
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
T* DequeList<T>::peekDeque() 
{
   T* item = NULL;
   if (!isEmpty()) 
   {  
      int size = list->size();
      item = list->get(size);
   }
   return item;
}  

template < class T >
void DequeList<T>::enqueueDeque(T* item)
{
   list->add(1, item);
}  

template < class T >
T* DequeList<T>::dequeueDeque()
{
   T* item = NULL;
   if (!isEmpty()) 
   {  
      int size = list->size();
      item = list->get(size);
      list->remove(size);
   }
   return item;  
}  

#endif
