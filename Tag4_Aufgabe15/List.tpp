#include <iostream>
#include <stdexcept>
#include "List.hpp"

template<typename T>
List<T>::List():
first(nullptr), last(nullptr), currentSize(0)
{
	
}

template<typename T>
List<T>::~List(){
	while(this->currentSize > 0){
		deleteFirst();
	}
}

template<typename T>
List<T>::List(const List<T> &other):
	first(nullptr), last(nullptr), currentSize(other.getSize())
{
	for(ListItem<T> *l = other.first; l != nullptr; l = l->getNext()) {
			appendElement(l->getContent());
	}
}

template<typename T>
void List<T>::prependElement(T i){
	ListItem<T> *l;
	if(this->first == nullptr){
		l = new ListItem<T>(nullptr, nullptr, i);
		this->first = l;
		this->last = l;
	}else{
		l = new ListItem<T>(nullptr, this->first, i);
		this->first = l;
	}
	
	++currentSize;
}

template<typename T>
void List<T>::appendElement(T i){
	ListItem<T> *l;
	if(this->last == nullptr){
		l = new ListItem<T>(nullptr, nullptr, i);
		this->first = l;
		this->last = l;
	}else{
		l = new ListItem<T>(this->last, nullptr, i);
		this->last = l;
	}
	
	++currentSize;
}

template<typename T>
void List<T>::insertElementAt(T i, size_t pos){
	if(pos > this->currentSize - 1){
		throw std::out_of_range("EPIC FAIL: list index out of range");
	}
	
	ListItem<T> *l = this->first;
	for(int i=0; i < pos; i++){
		l = l->getNext();
	}
	
	ListItem<T> *lnew = new ListItem<T>(l->getPrevious(), l, i);
	
	++currentSize;
}

template<typename T>
size_t List<T>::getSize() const{
	return this->currentSize;
}

template<typename T>
T &List<T>::getNthElement(size_t n){
	if(n > this->currentSize - 1){
		throw std::out_of_range("EPIC FAIL: list index out of range");
	}
	
	ListItem<T> *l = this->first;
	for(int i=0; i < n; i++){
		l = l->getNext();
	}
	
	return l->getContent();
}

template<typename T>
T &List<T>::getFirst(){
	return this->first->getContent();
}

template<typename T>
T &List<T>::getLast(){
	return this->last->getContent();
}

template<typename T>
void List<T>::deleteFirst(){
	if(this->first){
		ListItem<T> *second = this->first->getNext();
		delete this->first;
		this->first = second;
		
		if(second == nullptr){
			this->last = nullptr;
		}
		
		--currentSize;
	}
}

template<typename T>
void List<T>::deleteLast(){
	ListItem<T> *secondToLast = this->last->getPrevious();
	delete this->last;
	this->last = secondToLast;
	
	--currentSize;
}

template<typename T>
void List<T>::deleteAt(size_t pos){
	if(pos > this->currentSize - 1){
		throw std::out_of_range("EPIC FAIL: list index out of range");
	}
	
	ListItem<T> *l = this->first;
	for(int i=0; i < pos; i++){
		l = l->getNext();
	}
	
	int content = l->getContent();
	delete l;
	
	--currentSize;	
}

template<typename T>
ListIterator<T> List<T>::begin(){
	return ListIterator<T>(this, this->first);
}

template<typename T>
ListIterator<T> List<T>::end(){
	return ListIterator<T>(this, nullptr);
}

template<typename T>
std::ostream& operator<<(std::ostream& out, List<T>& list) {
	out << "[";
	ListIterator<T> iter = list.begin();
	if (iter != list.end()) {
		out << *iter++;
		while (iter != list.end()) {
			out << ", " << *iter++;
		}
	}
	out << "]";
	return out;
}