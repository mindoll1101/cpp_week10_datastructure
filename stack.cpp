#include "stack.h"

Stack::Stack() : LinkedList(){}

void Stack::operator+=(const int i){
  this -> push(i);
}
void Stack::push(int data){
  Node *newNode = new Node(data);
  newNode -> next_ = head_;
  head_ = newNode;
  size_++;
} // Stack의 정의에 맞게 데이터를 삽입한다.

int Stack::pop(){
  int result = this -> LinkedList::get(0);
  this -> LinkedList::remove(0);
  return result;
} // Stack의 정의에 맞게 데이터를 꺼내고 적절한 메모리를 해제한다.

int Stack::peek(){
  return this -> LinkedList::get(0);
} // Stack의 정의에 맞게 다음에 pop 될 값을 미리 본다.
// TODO: Stack 클래스 구현 작성