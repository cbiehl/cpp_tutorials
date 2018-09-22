#ifndef LIST_HPP
#define LIST_HPP
#include "List.hpp"
#endif
#ifndef LISTITERATOR_HPP
#define LISTITERATOR_HPP
#include "ListIterator.hpp"
#endif

template<typename T>
ListIterator<T>::ListIterator(List<T> *list, ListItem<T> *item){
	this->list = list;
	this->item = item;
}

template<typename T>
T &ListIterator<T>::operator*(){
	return this->item->getContent();
}

template<typename T>
bool ListIterator<T>::operator!=(const ListIterator<T> &other) const {
	return (this->item != other.item) || (this->list != other.list);
}

template<typename T>
ListIterator<T> &ListIterator<T>::operator++(){
	if(this->item == nullptr){
		item = this->list->first;
	}else{
		item = this->item->getNext();
	}
	
	return *this;
}

template<typename T>
ListIterator<T> ListIterator<T>::operator++(int){
	ListIterator iter(list, item);
	if(this->item == nullptr){
		item = this->list->first;
	}else{
		item = this->item->getNext();
	}
	
	return iter;
}

template<typename T>
ListIterator<T> &ListIterator<T>::operator--(){
	if(this->item == nullptr){
		item = this->list->first;
	}else{
		item = this->item->getPrevious();
	}
	
	return *this;
}

template<typename T>
ListIterator<T> ListIterator<T>::operator--(int){
	ListIterator<T> iter(list, item);
	if(this->item == nullptr){
		item = this->list->first;
	}else{
		item = this->item->getPrevious();
	}
	
	return iter;
 }