/**
 *   @file: node_iterator.h
 * @author: Allison McKee
 *   @date: 11-03-2023
 *  @brief: This is the header file for the node_iterator class.
 */

#ifndef NODE_ITERATOR_H
#define NODE_ITERATOR_H

#include <iostream>
#include "dnode.h"

// Forward declaration
template<class T> class dlist;

template<class T>
class node_iterator{
    public:
        friend class dlist<T>;

        node_iterator(dnode<T>* c = nullptr){current = c;} 

        bool operator ==(node_iterator other)const;
        bool operator !=(node_iterator other)const;
        T operator *()const;
        node_iterator operator ++(); // prefix
        node_iterator operator ++(int); // postfix
        node_iterator operator --(); // for bidirectional purposes
        node_iterator operator --(int);

    private:
        dnode<T>* current;

};

#include "node_iterator.template"

#endif