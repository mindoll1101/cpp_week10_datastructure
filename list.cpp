#include "list.h"

// TODO: List 클래스 구현 작성

List::List():LinkedList(){}
void List::insert(int index, int value){this -> LinkedList::insert(index, value);}
int List::get(int index){return this -> LinkedList::get(index);}
void List::remove(int index){this -> LinkedList::remove(index);}