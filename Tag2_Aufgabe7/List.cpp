#include <iostream>
#include <stdexcept>
#include "List.hpp"

List::List(){
	
}

List::~List(){
	while(this->first != nullptr){
		deleteFirst();
	}
}

List::List(const List& other):
	first(nullptr), last(nullptr), currentSize(other.getSize())
{
	for(ListItem *l = other.first; l != nullptr; l = l->getNext()) {
			appendElement(l->getContent());
	}
}

void List::prependElement(int i){
	ListItem *l;
	if(this->first == nullptr){
		l = new ListItem(nullptr, nullptr, i);
		this->first = l;
		this->last = l;
	}else{
		l = new ListItem(nullptr, this->first, i);
		this->first = l;
	}
	
	this->currentSize++;
}

void List::appendElement(int i){
	ListItem *l;
	if(this->last == nullptr){
		l = new ListItem(nullptr, nullptr, i);
		this->first = l;
		this->last = l;
	}else{
		l = new ListItem(this->last, nullptr, i);
		this->last = l;
	}
	
	this->currentSize++;
}

void List::insertElementAt(int i, size_t pos){
	if(pos > this->currentSize - 1){
		throw std::out_of_range("EPIC FAIL: list index out of range");
	}
	
	ListItem *l = this->first;
	for(int i=0; i < pos; i++){
		l = l->getNext();
	}
	
	ListItem *lnew = new ListItem(l->getPrevious(), l, i);
	
	this->currentSize++;
}

size_t List::getSize() const{
	return this->currentSize;
}

int &List::getNthElement(size_t n){
	if(n > this->currentSize - 1){
		throw std::out_of_range("EPIC FAIL: list index out of range");
	}
	
	ListItem *l = this->first;
	for(int i=0; i < n; i++){
		l = l->getNext();
	}
	
	return l->getContent();
}

int &List::getFirst(){
	return this->first->getContent();
}

int &List::getLast(){
	return this->last->getContent();
}

int List::deleteFirst(){
	int content = this->first->getContent();
	ListItem *second = this->first->getNext();
	delete this->first;
	this->first = second;
	
	this->currentSize--;
	
	return content;
}

int List::deleteLast(){
	int content = this->last->getContent();
	ListItem *secondToLast = this->last->getPrevious();
	delete this->last;
	this->last = secondToLast;
	
	this->currentSize--;
	
	return content;
}

int List::deleteAt(size_t pos){
	if(pos > this->currentSize - 1){
		throw std::out_of_range("EPIC FAIL: list index out of range");
	}
	
	ListItem *l = this->first;
	for(int i=0; i < pos; i++){
		l = l->getNext();
	}
	
	int content = l->getContent();
	delete l;
	
	this->currentSize--;
	
	return content;
}

ListIterator List::begin(){
	return ListIterator(this, this->first);
}

ListIterator List::end(){
	return ListIterator(this, nullptr);
}

std::ostream &operator<<(std::ostream &stream,  List &list){
	ListItem *l = list.first;
	
	while(l != list.last){
		stream << l->getContent() << ' ';
		
		l = l->getNext();
	}
	
	return stream;
}