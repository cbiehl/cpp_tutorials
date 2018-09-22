#include "ListItem.hpp"

template<typename T>
ListItem<T>::ListItem(ListItem<T> *prev, ListItem<T> *next, const T &content){
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

template<typename T>
ListItem<T>::~ListItem(){
	if(this->previous != nullptr){
		this->previous->next = this->next;
	}
	
	if(this->next != nullptr){
		this->next->previous = this->previous;
	}
}

template<typename T>
T &ListItem<T>::getContent(){
	return this->content;
}

template<typename T>
ListItem<T> *ListItem<T>::getNext(){
	return this->next;
}

template<typename T>
ListItem<T> *ListItem<T>::getPrevious(){
	return this->previous;
}