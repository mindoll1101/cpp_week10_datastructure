#include "linked_list.h"
#include <iostream>

// TODO: LinkedList 클래스 구현 작성
LinkedList::LinkedList(){
head_ = nullptr;
size_ = 0;
}

LinkedList::~LinkedList(){
  Node* tmp;
  int i = 0;
  while(i < size_){
    tmp = head_;
    head_ = head_ -> next_;
    delete tmp;
    i++;
  }
}
void LinkedList::print(){
  Node *tmp = head_;
  int i = 0;
  while(tmp!= nullptr){
    if(i >= size_)
      break;
    std::cout << tmp -> value_ << " ";
    tmp = tmp -> next_;
    i++;
  }
  std::cout << std::endl;
}

void LinkedList::insert(int index, int value){
  if(index == 0){
    Node *tmp = head_;
    head_ = new Node(value);
    head_ -> next_ = tmp;
    size_++;
  }
  else if(size_ >= index){
    int i = 0;
    Node *newNode = new Node(value);
    Node *tmp = head_;
    Node *prev = head_;
    while(i != index){
      prev = tmp;
      tmp = tmp -> next_;
      i++;
    }
    prev -> next_ = newNode;
    newNode -> next_ = tmp;
    size_++;
  }
}

int LinkedList::get(int index){
  Node *tmp = head_;
  int i = 0;
  while(i != index){
    tmp = tmp -> next_;
    i++;
  }
  return tmp -> value_;
}
void LinkedList::remove(int index){
  Node *tmp = head_;
  Node *prev = head_;
  if(size_ != 0 && index == 0)
    head_ = head_ -> next_;
  else{
    int i = 0;
    while(i != index){
      prev = tmp;
      tmp = tmp -> next_;
      i++;
    }
    prev -> next_ = tmp -> next_;
  }
  delete tmp;
  size_--;
}