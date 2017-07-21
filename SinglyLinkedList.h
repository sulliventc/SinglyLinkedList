//  =================================================================
//  SinglyLinkedList.h - Declares behavior for SinglyLinkedList class
//
//  Version: 1.0.0
//  Date: 6/3/17
//  By: Colten Sullivent
//  =================================================================

//  ============
    #pragma once

    #include "stdafx.h"
//  ===================

//  ========================
    class SinglyLinkedList {
    public:
        SinglyLinkedList();

        ~SinglyLinkedList();

        Node* GetFirst();
        void  InitializeList();
        void  DestroyList();
        void  InsertFirst(int);
        void  InsertLast(int);
        void  Insert(int, int);
        void  DeleteFirst();
        void  DeleteLast();
        void  Delete(int);
        void  Print();
        void  ReversePrint(Node *);
        bool  IsEmpty();
        int   Length();
    private:
        Node *first;
        Node *last;

        void ConstructorBanner();
        void DestructorBanner();
    }; // class SinglyLinkedList
//  ============================