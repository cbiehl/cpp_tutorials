#ifndef LISTITERATOR_HPP
#define LISTITERATOR_HPP

template<typename T>
class ListItem;
template<typename T>
class List;

template<typename T>
class ListIterator {
public:
	ListIterator(List<T> *list, ListItem<T> *item);
	T &operator*();
	bool operator!=(const ListIterator &other) const;
	ListIterator &operator++(); //prefix
	ListIterator operator++(int); //suffix
	ListIterator &operator--(); //prefix
	ListIterator operator--(int); //suffix
	
private:
	List<T> *list;
	ListItem<T> *item;
};

#include "ListIterator.tpp"

#endif