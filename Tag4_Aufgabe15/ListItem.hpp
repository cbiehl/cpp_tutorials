#ifndef LISTITEM_HPP
#define LISTITEM_HPP

template<typename T>
class ListItem {
public:
	ListItem(ListItem *prev, ListItem *next, const T &content);
	~ListItem();
	T &getContent();
	ListItem *getNext();
	ListItem *getPrevious();
	
private:
	ListItem(const ListItem &other);
	ListItem &operator=(const ListItem &other);

	ListItem *previous;
	ListItem *next;
	T content;
};

#include "ListItem.tpp"

#endif