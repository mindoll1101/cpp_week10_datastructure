#include "queue.h"

Queue::Queue():LinkedList(){
  tail_ = nullptr;
}

void Queue::operator+=(const int i){
  this -> push(i);
}
void Queue::push(int data){
  if(size_ == 0)
    head_ = tail_ = new Node(data);
  else{
    tail_ -> next_ = new Node(data);
    tail_ = tail_ -> next_;
  }
  size_++;
} // Queue의 정의에 맞게 데이터를 삽입한다.

int Queue::pop(){
  int result = LinkedList::get(0);
  LinkedList::remove(0);
  tail_ -> next_ = head_;
  return result;
} // Queue의 정의에 맞게 데이터를 꺼내고 적절한 메모리를 해제한다.

int Queue::peek(){
  return LinkedList::get(0);
} // Queue의 정의에 맞게 다음에 pop 될 값을 미리 본다.
// TODO: Queue 클래스 구현 작성