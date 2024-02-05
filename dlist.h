/**
 *   @file: dlist.h
 * @author: Allison McKee
 *   @date: 11-03-2023
 *  @brief: This is the header file for the dlist class.
 */

#ifndef DLIST_H
#define DLIST_H

#include <iostream>
#include "dnode.h"
#include "node_iterator.h"

template<class T>
class dlist{
    public:
        typedef node_iterator<T> iterator; // defines an iterator type in the dlist class

        // Constructor
        dlist();

        // Big 3
        ~dlist(); // Destructor
        dlist(const dlist& other); // Copy Constructor
        dlist& operator = (const dlist& other); // Assignment Operator

        void rear_insert(T item);
        void front_insert(T item);
        void rear_remove();
        void front_remove();

        node_iterator<T> begin();
        node_iterator<T> end();
        node_iterator<T> r_begin();
        node_iterator<T> r_end();

        void insert_before(node_iterator<T> position, T item);
        void insert_after(node_iterator<T> position, T item);
        void remove(node_iterator<T> position);
        int size();

        void show();
        void reverse_show();

    private:
        dnode<T>* head;
        dnode<T>* tail;

};

#include "dlist.template"

#endif