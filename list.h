#include "linked_list.h"
#ifndef LIST_H
#define LIST_H

// TODO: List 클래스 정의 작성
class List : public LinkedList{
public:
  List();
  void insert(int index, int value);
  int get(int index);
  void remove(int index);
};
#endif