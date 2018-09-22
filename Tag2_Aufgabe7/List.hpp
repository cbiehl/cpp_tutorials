#include <cstddef>
#include <iostream>
#include "ListItem.hpp"
#ifndef INCLUDE_LISTITERATOR
#define INCLUDE_LISTITERATOR
#include "ListIterator.hpp"
#endif

class List {
public:
	List();
	~List();
	List(const List &other);
	void appendElement(int i);
	void prependElement(int i);
	void insertElementAt(int i, size_t pos);
	size_t getSize() const;
	int &getNthElement(size_t n);
	int &getFirst();
	int &getLast();
	int deleteFirst();
	int deleteLast();
	int deleteAt(size_t pos);
	ListIterator begin();
	ListIterator end();
	
private:
	ListItem *first, *last;
	size_t currentSize;
	
friend class ListIterator;
friend std::ostream &operator<<(std::ostream &stream,  List &list);
};