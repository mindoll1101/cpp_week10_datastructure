#include "linked_list.h"
#ifndef QUEUE_H
#define QUEUE_H

// TODO: Queue 클래스 정의 작성
class Queue : public LinkedList{
  public:
    Queue();
    void push(int data); // Queue의 정의에 맞게 데이터를 삽입한다.
    int pop(); // Queue의 정의에 맞게 데이터를 꺼내고 적절한 메모리를 해제한다.
    int peek(); // Queue의 정의에 맞게 다음에 pop 될 값을 미리 본다.
    void operator+=(const int i);
  private:
    Node *tail_;
};
#endif