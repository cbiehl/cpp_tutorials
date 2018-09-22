#include <iostream>
#include "List.hpp"

int main(int argc, char **argv){
	/*
	List<double> *list = new List<double>();
	for(int i = 0; i < 11; i++){
		double j = i;
		list->appendElement(j);
	}
	
	List<double> *list2 = new List<double>(*list);
	
	list->insertElementAt(42, 5);
	
	std::cout << *list << std::endl;
	std::cout << *list2 << std::endl << std::endl;
	
	std::cout << "Ausgabe mit Iterator: " << std::endl;
	for(ListIterator<double> iter = list->begin(); iter != list->end(); ++iter){
		std::cout << *iter << ' ';
	}*/
	
	List<List<int>> list;
	list.appendElement(List<int>());
	list.getFirst().appendElement(1);
	list.getFirst().appendElement(2);
	list.appendElement(List<int>());
	list.getLast().appendElement(3);
	list.appendElement(List<int>());
	list.getLast().appendElement(4);
	list.getLast().appendElement(5);
	std::cout << list << std::endl;
	
	std::cout << std::endl;
	
	return 0;
}
