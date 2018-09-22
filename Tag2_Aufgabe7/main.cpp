#include <iostream>
#include "List.hpp"
#ifndef INCLUDE_LISTITERATOR
#define INCLUDE_LISTITERATOR
#include "ListIterator.hpp"
#endif

int main(int argc, char **argv){
	List *list = new List();
	for(int i = 0; i < 11; i++){
		list->appendElement(i);
	}
	
	List *list2 = new List(*list);
	
	list->insertElementAt(42, 5);
	
	std::cout << *list << std::endl;
	std::cout << *list2 << std::endl << std::endl;
	
	std::cout << "Ausgabe mit Iterator: " << std::endl;
	for(ListIterator iter = list->begin(); iter != list->end(); ++iter){
		std::cout << *iter << ' ';
	}
	std::cout << std::endl << std::endl;
	
	try{
		list->deleteAt(42);
		
	}catch(const std::out_of_range &e){
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
