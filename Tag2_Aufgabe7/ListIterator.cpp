#ifndef INCLUDE_LISTITERATOR
#define INCLUDE_LISTITERATOR
#include "ListIterator.hpp"
#endif
#include "List.hpp"

ListIterator::ListIterator(List* list, ListItem *item){
	this->list = list;
	this->item = item;
}

int &ListIterator::operator*(){
	return this->item->getContent();
}

bool ListIterator::operator!=(const ListIterator &other) const {
	return (this->item != other.item) || (this->list != other.list);
}

ListIterator &ListIterator::operator++(){
	if(this->item == nullptr){
		item = this->list->first;
	}else{
		item = this->item->getNext();
	}
	
	return *this;
}

ListIterator ListIterator::operator++(int){
	ListIterator iter(list, item);
	if(this->item == nullptr){
		item = this->list->first;
	}else{
		item = this->item->getNext();
	}
	
	return iter;
}

ListIterator &ListIterator::operator--(){
	if(this->item == nullptr){
		item = this->list->first;
	}else{
		item = this->item->getPrevious();
	}
	
	return *this;
}

ListIterator ListIterator::operator--(int){
	ListIterator iter(list, item);
	if(this->item == nullptr){
		item = this->list->first;
	}else{
		item = this->item->getPrevious();
	}
	
	return iter;
 }