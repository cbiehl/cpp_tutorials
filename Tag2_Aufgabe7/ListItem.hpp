class ListItem {
public:
	ListItem(ListItem *prev, ListItem *next, int content);
	~ListItem();
	int &getContent();
	ListItem *getNext();
	ListItem *getPrevious();
	
private:
	ListItem(const ListItem &other);
	ListItem &operator=(const ListItem &other);

	ListItem *previous;
	ListItem *next;
	int content;
};