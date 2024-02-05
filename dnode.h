/**
 *   @file: dnode.h
 * @author: Allison McKee
 *   @date: 11-03-2023
 *  @brief: This is the header file for the dnode class.
 */

#ifndef DNODE_H
#define DNODE_H

#include <iostream>

template<class T>
class dnode{
    public:
        // Constructor
        dnode(T d = T(), dnode* n = nullptr, dnode* p = nullptr) {data_field = d; next_ptr = n; previous_ptr = p;}

        // Getters -- Didn't name them like getters for convenience
        T data()const{return data_field;}
        dnode* next()const{return next_ptr;}
        dnode* previous()const{return previous_ptr;}

        // Setters
        void set_data(T item){data_field = item;}
        void set_next(dnode* n){next_ptr = n;}
        void set_previous(dnode* p){previous_ptr = p;}
    

    private:
        T data_field;
        dnode* next_ptr;
        dnode* previous_ptr;
};

#endif