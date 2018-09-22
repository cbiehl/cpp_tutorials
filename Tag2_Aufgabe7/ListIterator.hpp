class ListItem;
class List;

class ListIterator {
public:
	ListIterator(List *list, ListItem *item);
	int &operator*();
	bool operator!=(const ListIterator &other) const;
	ListIterator &operator++(); //prefix
	ListIterator operator++(int); //suffix
	ListIterator &operator--(); //prefix
	ListIterator operator--(int); //suffix
	
private:
	List *list;
	ListItem *item;
};