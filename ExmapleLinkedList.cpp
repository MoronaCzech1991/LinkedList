#include <iostream>
#include "LinkedList.h"

int main()
{
    LINKED_LIST::LinkedLsit<int>* linkedLsit = new LINKED_LIST::LinkedLsit<int>();

    linkedLsit->insertNode(1);
    linkedLsit->insertNode(2);
    linkedLsit->insertNode(5);
    linkedLsit->insertNode(6);
    linkedLsit->insertNode(7);
    linkedLsit->insertNode(9);

    linkedLsit->showList();
}

