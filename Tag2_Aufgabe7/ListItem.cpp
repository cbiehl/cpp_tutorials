#include "ListItem.hpp"

ListItem::ListItem(ListItem *prev, ListItem *next, int content){
	if(prev != nullptr){
		prev->next = this;
	}
	
	if(next != nullptr){
		next->previous = this;
	}
	
	this->previous = prev;
	this->next = next;
	this->content = content;
}

ListItem::~ListItem(){
	if(this->previous != nullptr){
		this->previous->next = this->next;
	}
	
	if(this->next != nullptr){
		this->next->previous = this->previous;
	}
}

int &ListItem::getContent(){
	return this->content;
}

ListItem *ListItem::getNext(){
	return this->next;
}

ListItem *ListItem::getPrevious(){
	return this->previous;
}