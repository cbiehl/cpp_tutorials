#ifndef LIST_HPP
#define LIST_HPP

#include <cstddef>
#include <iostream>
#include "ListItem.hpp"
#include "ListIterator.hpp"

//template<typename T>
//std::ostream &operator<<(std::ostream &stream,  List<T> &list);

template<typename T>
class List {
public:
	List();
	~List();
	List(const List &other);
	void appendElement(T i);
	void prependElement(T i);
	void insertElementAt(T i, size_t pos);
	size_t getSize() const;
	T &getNthElement(size_t n);
	T &getFirst();
	T &getLast();
	void deleteFirst();
	void deleteLast();
	void deleteAt(size_t pos);
	ListIterator<T> begin();
	ListIterator<T> end();
	
private:
	ListItem<T> *first, *last;
	size_t currentSize;
	
friend class ListIterator<T>;
//friend std::ostream &operator<<(std::ostream &stream,  List &list);
};

#include "List.tpp"

#endif